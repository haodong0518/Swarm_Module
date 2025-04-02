#include <cstdio>
#include <memory>
#include <string>

#include "dynamixel_sdk/dynamixel_sdk.h"
#include "dynamixel_sdk_custom_interfaces/msg/set_position.hpp"
#include "dynamixel_sdk_custom_interfaces/srv/get_position.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rcutils/cmdline_parser.h"

#include "read_write_node.hpp"

// Control table address for X series (except XL-320)
#define ADDR_OPERATING_MODE 11
#define ADDR_TORQUE_ENABLE 64
#define ADDR_GOAL_POSITION 116
#define ADDR_PRESENT_POSITION 132
#define ADDR_GOAL_VELOCITY 104
#define ADDR_PRESENT_VELOCITY 128

// Protocol version
#define PROTOCOL_VERSION 2.0  // Default Protocol version of DYNAMIXEL X series.

// Default setting
#define BAUDRATE 57600  // Default Baudrate of DYNAMIXEL X series
#define DEVICE_NAME "/dev/ttyUSB0"  // [Linux]: "/dev/ttyUSB*", [Windows]: "COM*"

dynamixel::PortHandler * portHandler;
dynamixel::PacketHandler * packetHandler;

uint8_t dxl_error = 0;
uint32_t goal_position = 0;
int dxl_comm_result = COMM_TX_FAIL;

// use int for the addr, so that I can change in the function
int addr_present;
int addr_goal;
int operation_mode; // 1 - velocity mode, 4 - extended position mode

ReadWriteNode::ReadWriteNode()
: Node("read_write_node")
{
  RCLCPP_INFO(this->get_logger(), "Run read write node");  //self.get_logger().info("Run read write node")

  this->declare_parameter("qos_depth", 10); //self.declare_parameter("qos_depth", 10)
  int8_t qos_depth = 0;
  this->get_parameter("qos_depth", qos_depth); //self.get_parameter("qos_depth", qos_depth)

  const auto QOS_RKL10V =
    rclcpp::QoS(rclcpp::KeepLast(qos_depth)).reliable().durability_volatile(); //rclcpp.qos.QoS(rclcpp.qos.KeepLast(qos_depth)).reliable().durability_volatile()
  
  set_position_subscriber_ =
    this->create_subscription<SetPosition>(
    "/robot_2/set_position",
    QOS_RKL10V,
    [this](const SetPosition::SharedPtr msg) -> void
    {
      uint8_t dxl_error = 0;

      // Position Value of X series is 4 byte data.
      // For AX & MX(1.0) use 2 byte data(uint16_t) for the Position Value.
      uint32_t goal_position = (unsigned int)msg->position;  // Convert int32 -> uint32

      // Write Goal Position (length : 4 bytes)
      // When writing 2 byte data to AX / MX(1.0), use write2ByteTxRx() instead.
      dxl_comm_result =
      packetHandler->write4ByteTxRx(
        portHandler,
        (uint8_t) msg->id,
        addr_goal,
        goal_position,
        &dxl_error
      );

      if (dxl_comm_result != COMM_SUCCESS) {
        RCLCPP_INFO(this->get_logger(), "%s", packetHandler->getTxRxResult(dxl_comm_result));
      } else if (dxl_error != 0) {
        RCLCPP_INFO(this->get_logger(), "%s", packetHandler->getRxPacketError(dxl_error));
      } else {
        RCLCPP_INFO(this->get_logger(), "Set [ID: %d] [Goal: %d] at [ADDR: %d]", msg->id, msg->position, addr_goal);
      }
    }
    );
  
  // create a subscriber for set motor mode 
  // if mode = 0, position mode, set the present and goal position addr
  // if mode = 1, velocity mode, set the present and goal velocity addr
  set_mode_subscriber_ =
   this->create_subscription<SetMode>(
    "/robot_2/set_mode",
    QOS_RKL10V,
    [this](const SetMode::SharedPtr msg) -> void
    {
      uint8_t dxl_error = 0;
      if (msg->mode == 4) {
        addr_present = ADDR_PRESENT_POSITION; //position mode
        addr_goal = ADDR_GOAL_POSITION;
        operation_mode = 4; 
      } 
      else if (msg->mode == 1) {
        addr_present = ADDR_PRESENT_VELOCITY;
        addr_goal = ADDR_GOAL_VELOCITY;
        operation_mode = 1;
      }

      //disable Torque of DYNAMIXEL
      dxl_comm_result = packetHandler->write1ByteTxRx(
        portHandler,
        BROADCAST_ID,
        ADDR_TORQUE_ENABLE,
        0,
        &dxl_error
      );

      if (dxl_comm_result != COMM_SUCCESS) {
        RCLCPP_ERROR(rclcpp::get_logger("read_write_node"), "Failed to disable torque.");
      } else {
        RCLCPP_INFO(rclcpp::get_logger("read_write_node"), "Succeeded to disable torque.");
      };

      // change the opearting mode 
      dxl_comm_result = packetHandler->write1ByteTxRx(
        portHandler,
        BROADCAST_ID,
        ADDR_OPERATING_MODE,
        operation_mode,
        &dxl_error
      );

      if (dxl_comm_result != COMM_SUCCESS) {
        RCLCPP_ERROR(rclcpp::get_logger("read_write_node"), "Failed to set Mode.");
      } else {
        RCLCPP_INFO(rclcpp::get_logger("read_write_node"), "Succeeded to set Mode.");
      }

      //Enable Torque of DYNAMIXEL
      dxl_comm_result = packetHandler->write1ByteTxRx(
        portHandler,
        BROADCAST_ID,
        ADDR_TORQUE_ENABLE,
        1,
        &dxl_error
      );

      if (dxl_comm_result != COMM_SUCCESS) {
        RCLCPP_ERROR(rclcpp::get_logger("read_write_node"), "Failed to enable torque.");
      } else {
        RCLCPP_INFO(rclcpp::get_logger("read_write_node"), "Succeeded to enable torque.");
      };
    }
    );

  auto get_present_position =
    [this](
    const std::shared_ptr<GetPosition::Request> request,
    std::shared_ptr<GetPosition::Response> response) -> void
    {
      // Read Present Position (length : 4 bytes) and Convert uint32 -> int32
      // When reading 2 byte data from AX / MX(1.0), use read2ByteTxRx() instead.
      dxl_comm_result = packetHandler->read4ByteTxRx(
        portHandler,
        (uint8_t) request->id,
        addr_present,
        reinterpret_cast<uint32_t *>(&present_position),
        &dxl_error
      );

      RCLCPP_INFO(
        this->get_logger(),
        "Get [ID: %d] [Present value: %d]",
        request->id,
        present_position
      );

      response->position = present_position;
    };

  get_position_server_ = create_service<GetPosition>("/robot_2/get_position", get_present_position);
}

ReadWriteNode::~ReadWriteNode() 
{
}

int main(int argc, char * argv[])
{
  portHandler = dynamixel::PortHandler::getPortHandler(DEVICE_NAME);
  packetHandler = dynamixel::PacketHandler::getPacketHandler(PROTOCOL_VERSION);

  // Open Serial Port
  dxl_comm_result = portHandler->openPort();
  if (dxl_comm_result == false) {
    RCLCPP_ERROR(rclcpp::get_logger("read_write_node"), "Failed to open the port!");
    return -1;
  } else {
    RCLCPP_INFO(rclcpp::get_logger("read_write_node"), "Succeeded to open the port.");
  }

  // Set the baudrate of the serial port (use DYNAMIXEL Baudrate)
  dxl_comm_result = portHandler->setBaudRate(BAUDRATE);
  if (dxl_comm_result == false) {
    RCLCPP_ERROR(rclcpp::get_logger("read_write_node"), "Failed to set the baudrate!");
    return -1;
  } else {
    RCLCPP_INFO(rclcpp::get_logger("read_write_node"), "Succeeded to set the baudrate.");
  }

  rclcpp::init(argc, argv);

  auto readwritenode = std::make_shared<ReadWriteNode>();
  rclcpp::spin(readwritenode);
  rclcpp::shutdown();
  return 0;
}
