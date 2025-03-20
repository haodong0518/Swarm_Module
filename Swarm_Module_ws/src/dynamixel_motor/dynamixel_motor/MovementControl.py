import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from rclpy.qos import QoSDurabilityPolicy
from dynamixel_sdk_custom_interfaces.msg import SetPosition, Rolling, SetMode
from dynamixel_sdk_custom_interfaces.srv import GetPosition, SetVelocity, SetExtension, SetBending, Movement
from std_srvs.srv import Empty
import time
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup, ReentrantCallbackGroup

# max speed 440 
class MovementControl(Node):
    def __init__(self):
        super().__init__('movement_control')
        self.declare_parameter('motor_ids', [0, 1, 2, 3, 8, 9, 10, 11]) # 0- 4 , 5- 7, 1 -3, 2-6
        qos_profile = QoSProfile(
            depth=10,
            durability=QoSDurabilityPolicy.VOLATILE,  # Can also be TRANSIENT_LOCAL
            )
        self.service_group = MutuallyExclusiveCallbackGroup()
        self.drive_srv = self.create_service(SetVelocity, '/robot_1/drive', self.drive_srv_callback)
        self.extension_srv = self.create_service(SetExtension,'/robot_1/extension',self.extension_srv_callback, callback_group=self.service_group)        
        self.update_init_srv = self.create_service(Empty, '/robot_1/update_init', self.update_init_srv_callback)
        self.bending_srv = self.create_service(SetBending,'/robot_1/bending',self.bending_srv_callback)
        self.pub_pos = self.create_publisher(SetPosition, '/robot_1/set_position', qos_profile)
        self.init_srv = self.create_service(Empty, '/robot_1/init', self.init_srv_callback)
        
        self.pudding_srv = self.create_service(Empty, '/robot_1/puddling', self.puddling_srv_callback)
        self.pudding_srv4 = self.create_service(Empty, '/robot_1/puddling4', self.pudding_srv4_callback)

        # continuous movement
        self.movement_srv = self.create_service(Movement, '/robot_1/set_movement', self.movement_srv_callback)
        self.turn_srv = self.create_service(Empty, '/robot_1/turn', self.turn_srv_callback)

        # create the timer
        self.timer_period = 2.0
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

        # set the movemnet mode 1 - velocity mode, 4 - position mode
        self.mode_pub = self.create_publisher(SetMode, '/robot_1/set_mode', 10)
        self.client_group = ReentrantCallbackGroup()



        self.position_cli = self.create_client(GetPosition, '/robot_1/get_position', callback_group=self.client_group)
        self.extension_cli = self.create_client(SetExtension, '/robot_1/extension', callback_group=self.client_group)
        while not self.position_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('robot_1/get_position service not available, waiting again...')
        while not self.extension_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('robot_1/set_extension service not available, waiting again...')

        self.robot_switch = 'FALSE'
        self.state = 'INIT'
        self.movement = 'SLEEP'
        self.twist_dir = 0
        
        self.msg0 = SetPosition()
        self.msg1 = SetPosition()
        self.msg2 = SetPosition()
        self.msg3 = SetPosition()
        self.msg4 = SetPosition()
        self.msg5 = SetPosition()
        self.msg6 = SetPosition()
        self.msg7 = SetPosition()

        self.msg0.id = 0
        self.msg1.id = 1
        self.msg2.id = 2
        self.msg3.id = 3
        self.msg4.id = 4
        self.msg5.id = 5
        self.msg6.id = 6
        self.msg7.id = 7
    
    async def get_current_position(self):
        future0 = self.position_cli.call_async(GetPosition.Request(id=0))
        self.curr_p0 = await future0 

        future1 = self.position_cli.call_async(GetPosition.Request(id=1))
        self.curr_p1 = await future1 
        
        future2 = self.position_cli.call_async(GetPosition.Request(id=2))
        self.curr_p2 = await future2 

        future3 = self.position_cli.call_async(GetPosition.Request(id=3))
        self.curr_p3 = await future3 

        future4 = self.position_cli.call_async(GetPosition.Request(id=4))
        self.curr_p4 = await future4 

        future5 = self.position_cli.call_async(GetPosition.Request(id=5))
        self.curr_p5 = await future5 

        future6 = self.position_cli.call_async(GetPosition.Request(id=6))
        self.curr_p6 = await future6 

        future7 = self.position_cli.call_async(GetPosition.Request(id=7))
        self.curr_p7 = await future7 

        return 0

    async def update_init_srv_callback(self,request,response):
        await self.get_current_position()
        self.get_logger().info('Update init position')
        return response
    
    def timer_callback(self):
        if self.movement == 'craw':
            if self.robot_switch == 'ON':
                if self.state  == 'INIT':
                    self.extension_cli.call_async(SetExtension.Request(extend_state=1.0, side='pi'))
                    self.state = 'EXTEND'
                elif self.state == 'EXTEND':
                    self.extension_cli.call_async(SetExtension.Request(extend_state=0.0, side='pi'))
                    self.state = 'INIT'
            
            elif self.robot_switch == 'OFF':
                self.extension_cli.call_async(SetExtension.Request(extend_state=0.0, side='pi'))
        elif self.movement == 'twist':
            if self.robot_switch == 'ON':
                if self.twist_dir == 0:
                    self.msg0.position = self.curr_p0.position + 5000
                    self.msg2.position = self.curr_p2.position + 5000
                    self.pub_pos.publish(self.msg0)
                    self.pub_pos.publish(self.msg2)
                elif self.twist_dir == 1: 
                    self.msg1.position = self.curr_p1.position - 5000
                    self.msg5.position = self.curr_p5.position - 5000
                    self.pub_pos.publish(self.msg1)
                    self.pub_pos.publish(self.msg5)            
            elif self.robot_switch == 'OFF':
                self.extension_cli.call_async(SetExtension.Request(extend_state=0.0, side='pi'))
        else:
            pass
            
    # 0 - 1 to describe how much velocity to drive, 1 means max speed
    def drive_srv_callback(self,request, response):
        
        self.get_logger().info('Received drive service request')

        mode_msg = SetMode()
        mode_msg.mode = 1
        self.mode_pub.publish(mode_msg)
        self.get_logger().info('Set mode to velocity mode')

        vel = int(round(request.vel * 440))

        self.msg7.position = -vel
        self.msg4.position = -vel
        self.msg5.position = vel
        self.msg0.position = vel
        self.msg1.position = vel
        self.msg2.position = vel
        self.msg3.position = -vel
        self.msg6.position = -vel

        self.pub_pos.publish(self.msg7)
        self.pub_pos.publish(self.msg4)
        self.pub_pos.publish(self.msg0)
        self.pub_pos.publish(self.msg5)
        self.pub_pos.publish(self.msg1)
        self.pub_pos.publish(self.msg2)
        self.pub_pos.publish(self.msg3)
        self.pub_pos.publish(self.msg6)
        self.get_logger().info('Set velocity to 440')

        response.success = True

        return response 
    
    # from 0 - 1 to describe how much extend,
    # 'pi' and 'battery' to describe which side to extend
    def extension_srv_callback(self,request,response):
        self.get_logger().info('Received extension service request')
        mode_msg = SetMode()
        mode_msg.mode = 4
        self.mode_pub.publish(mode_msg)
        self.get_logger().info('Set mode to extension mode')

        extend_pos  = int(round(request.extend_state * 4000))

        if request.side == 'pi':
            self.msg0.position = self.curr_p0.position + extend_pos
            self.msg2.position = self.curr_p2.position + extend_pos
            self.msg5.position = self.curr_p5.position - extend_pos
            self.msg1.position = self.curr_p1.position - extend_pos
            self.pub_pos.publish(self.msg5)
            self.pub_pos.publish(self.msg1)
            self.pub_pos.publish(self.msg0)
            self.pub_pos.publish(self.msg2)

        elif request.side == 'battery': 
            self.msg7.position = self.curr_p7.position - extend_pos
            self.msg3.position = self.curr_p3.position - extend_pos
            self.pub_pos.publish(self.msg7)
            self.pub_pos.publish(self.msg3)
            self.msg4.position = self.curr_p4.position + extend_pos
            self.msg6.position = self.curr_p6.position + extend_pos
            self.pub_pos.publish(self.msg4)
            self.pub_pos.publish(self.msg6)


        self.get_logger().info('Set extension successfully')
        response.success = True
        return response

    async def movement_srv_callback(self, request, response):
        self.movement = request.movement
        self.robot_switch = request.robot_switch
        self.timer_period = request.time_period
        self.twist_dir = request.twist_dir
        self.get_logger().info('Received crawling service request')
        mode_msg = SetMode()
        mode_msg.mode = 4
        self.mode_pub.publish(mode_msg)
        self.get_logger().info('Set mode to position mode')
        response.success = True
        return response

    # bending motion
    # !!! move two motors seems more reasonable because the position is not accurate
    def bending_srv_callback(self,request, response):
        self.get_logger().info('Received bending service request')
        bend_pos = int(round(request.bend_state * 2000))
        mode_msg = SetMode()
        mode_msg.mode = 4
        self.mode_pub.publish(mode_msg)
        self.get_logger().info('Set mode to position mode')
        if request.face == 1:
            self.msg2.position = self.curr_p2.position + bend_pos
            self.msg1.position = self.curr_p1.position - bend_pos
            self.msg3.position = self.curr_p3.position - bend_pos
            self.msg6.position = self.curr_p6.position + bend_pos
            self.pub_pos.publish(self.msg2)
            self.pub_pos.publish(self.msg1) 
            self.pub_pos.publish(self.msg3)
            self.pub_pos.publish(self.msg6)
        elif request.face == 2:
            self.msg2.position = self.curr_p2.position + bend_pos
            self.msg5.position = self.curr_p5.position - bend_pos
            self.msg7.position = self.curr_p7.position - bend_pos
            self.msg6.position = self.curr_p6.position + bend_pos
            self.pub_pos.publish(self.msg2)
            self.pub_pos.publish(self.msg5) 
            self.pub_pos.publish(self.msg6)
            self.pub_pos.publish(self.msg7)
        elif request.face == 3:
            self.msg0.position = self.curr_p0.position + bend_pos
            self.msg7.position = self.curr_p7.position - bend_pos
            self.msg5.position = self.curr_p5.position - bend_pos
            self.msg4.position = self.curr_p4.position + bend_pos
            self.pub_pos.publish(self.msg0)
            self.pub_pos.publish(self.msg7) 
            self.pub_pos.publish(self.msg5)
            self.pub_pos.publish(self.msg4)
        elif request.face == 4:
            self.msg0.position = self.curr_p0.position + bend_pos
            self.msg1.position = self.curr_p1.position - bend_pos
            self.msg3.position = self.curr_p3.position - bend_pos
            self.msg4.position = self.curr_p4.position + bend_pos
            self.pub_pos.publish(self.msg0)
            self.pub_pos.publish(self.msg1) 
            self.pub_pos.publish(self.msg3)
            self.pub_pos.publish(self.msg4)

        response.success = True
        return response


    # before design flip movement, 
    # 1. can not flip if there is no enough power from battery
    # 2. if the weights of two sides have too much differece, always the lighter side will flip
    # 3. the module only can twist two directions. 
    # !! Why same movement, some face work, when difference faces up, it didn't? It relates to the order of HSA movement, when from extension
    # to twist, once a HSA contract, the box will tend to lean to some directions. 


    async def pudding_srv4_callback(self,request,response):
        self.get_logger().info('Received puddling service request')
        future0 = self.position_cli.call_async(GetPosition.Request(id=0))
        resp0 = await future0 
        self.get_logger().info('position0: {}'.format(resp0.position))

        future1 = self.position_cli.call_async(GetPosition.Request(id=1))
        resp1 = await future1 
        self.get_logger().info('position1: {}'.format(resp1.position))
        
        future2 = self.position_cli.call_async(GetPosition.Request(id=2))
        resp2 = await future2 
        self.get_logger().info('position2: {}'.format(resp2.position))

        future3 = self.position_cli.call_async(GetPosition.Request(id=3))
        resp3 = await future3 
        self.get_logger().info('position3: {}'.format(resp3.position))

        future4 = self.position_cli.call_async(GetPosition.Request(id=4))
        resp4 = await future4 
        self.get_logger().info('position4: {}'.format(resp4.position))

        future5 = self.position_cli.call_async(GetPosition.Request(id=5))
        resp5 = await future5 
        self.get_logger().info('position5: {}'.format(resp5.position))

        future6 = self.position_cli.call_async(GetPosition.Request(id=6))
        resp6 = await future6 
        self.get_logger().info('position6: {}'.format(resp6.position))

        future7 = self.position_cli.call_async(GetPosition.Request(id=7))
        resp7 = await future7 
        self.get_logger().info('position7: {}'.format(resp7.position))

        #full extension -- face 4
        self.msg0.position = resp0.position +4000
        self.msg2.position = resp2.position +4000
        self.pub_pos.publish(self.msg0)
        self.pub_pos.publish(self.msg2)

        self.msg7.position = resp7.position-4000
        self.msg3.position = resp3.position-4000
        self.pub_pos.publish(self.msg7)
        self.pub_pos.publish(self.msg3)

        time.sleep(2)
        # twisting
        self.msg3.position = resp3.position
        self.msg7.position = resp7.position
        self.pub_pos.publish(self.msg3)
        time.sleep(0.5) 
        self.pub_pos.publish(self.msg7)

        time.sleep(2)
        self.msg0.position = resp0.position
        self.pub_pos.publish(self.msg0)
        self.msg2.position = resp2.position
        time.sleep(0.5) 
        self.pub_pos.publish(self.msg2)

        #full extension -- face 3
        time.sleep(2)
        self.msg0.position = resp0.position +4000
        self.msg2.position = resp2.position +4000
        self.pub_pos.publish(self.msg0)
        self.pub_pos.publish(self.msg2)

        self.msg7.position = resp7.position-4000
        self.msg3.position = resp3.position-4000
        self.pub_pos.publish(self.msg7)
        self.pub_pos.publish(self.msg3)

        time.sleep(2)
        # twisting
        self.msg3.position = resp3.position
        self.msg7.position = resp7.position
        self.pub_pos.publish(self.msg7)
        time.sleep(0.5) 
        self.pub_pos.publish(self.msg3)

        time.sleep(2)
        self.msg0.position = resp0.position
        self.pub_pos.publish(self.msg0)
        self.msg2.position = resp2.position
        self.pub_pos.publish(self.msg2)

        #full extension -- face 2
        time.sleep(2)
        self.msg0.position = resp0.position +4000
        self.msg2.position = resp2.position +4000
        self.pub_pos.publish(self.msg0)
        self.pub_pos.publish(self.msg2)

        self.msg7.position = resp7.position-4000
        self.msg3.position = resp3.position-4000
        self.pub_pos.publish(self.msg7)
        self.pub_pos.publish(self.msg3)

        time.sleep(2)
        # twisting
        self.msg3.position = resp3.position
        self.msg7.position = resp7.position
        self.pub_pos.publish(self.msg3)
        time.sleep(0.5) 
        self.pub_pos.publish(self.msg7)


        time.sleep(2)
        self.msg0.position = resp0.position
        self.pub_pos.publish(self.msg0)
        self.msg2.position = resp2.position
        time.sleep(0.5) 
        self.pub_pos.publish(self.msg2)

        #full extension -- face 1
        time.sleep(2)
        self.msg0.position = resp0.position +4000
        self.msg2.position = resp2.position +4000
        self.pub_pos.publish(self.msg0)
        self.pub_pos.publish(self.msg2)

        self.msg7.position = resp7.position-4000
        self.msg3.position = resp3.position-4000
        self.pub_pos.publish(self.msg7)
        self.pub_pos.publish(self.msg3)

        time.sleep(2)
        # twisting
        self.msg3.position = resp3.position
        self.msg7.position = resp7.position
        self.pub_pos.publish(self.msg3)
        time.sleep(0.5) 
        self.pub_pos.publish(self.msg7)

        time.sleep(2)
        self.msg0.position = resp0.position
        self.pub_pos.publish(self.msg0)
        self.msg2.position = resp2.position
        time.sleep(0.5) 
        self.pub_pos.publish(self.msg2) 

        return response


    # make turns, using velocity mode
    def turn_srv_callback(self,request, response):
        self.get_logger().info('Received turn service request')
        self.msg4.position = 20
        self.msg6.position = 20

        self.pub_pos.publish(self.msg4)
        self.pub_pos.publish(self.msg6)

        time.sleep(11)

        self.msg4.position = 80
        self.msg6.position = -80
        self.msg0.position = -80
        self.msg2.position = 80

        self.pub_pos.publish(self.msg4)
        self.pub_pos.publish(self.msg6)
        self.pub_pos.publish(self.msg0)
        self.pub_pos.publish(self.msg2)

        return response
        
    # position mode 
    async def puddling_srv_callback(self, request, response):
        self.get_logger().info('Received puddling service request')
        future0 = self.position_cli.call_async(GetPosition.Request(id=0))
        resp0 = await future0 
        self.get_logger().info('position0: {}'.format(resp0.position))

        future1 = self.position_cli.call_async(GetPosition.Request(id=1))
        resp1 = await future1 
        self.get_logger().info('position1: {}'.format(resp1.position))
        
        future2 = self.position_cli.call_async(GetPosition.Request(id=2))
        resp2 = await future2 
        self.get_logger().info('position2: {}'.format(resp2.position))

        future3 = self.position_cli.call_async(GetPosition.Request(id=3))
        resp3 = await future3 
        self.get_logger().info('position3: {}'.format(resp3.position))

        future4 = self.position_cli.call_async(GetPosition.Request(id=4))
        resp4 = await future4 
        self.get_logger().info('position4: {}'.format(resp4.position))

        future5 = self.position_cli.call_async(GetPosition.Request(id=5))
        resp5 = await future5 
        self.get_logger().info('position5: {}'.format(resp5.position))

        future6 = self.position_cli.call_async(GetPosition.Request(id=6))
        resp6 = await future6 
        self.get_logger().info('position6: {}'.format(resp6.position))

        future7 = self.position_cli.call_async(GetPosition.Request(id=7))
        resp7 = await future7 
        self.get_logger().info('position7: {}'.format(resp7.position))

        
        self.msg0.position = resp0.position +4000
        self.msg2.position = resp2.position +4000
        self.pub_pos.publish(self.msg0)
        time.sleep(0.5)
        self.pub_pos.publish(self.msg2)

        time.sleep(1.5)
        # full extension
        self.msg7.position = resp7.position-4000
        self.msg3.position = resp3.position-4000
        
        self.pub_pos.publish(self.msg7)
        time.sleep(0.5) 
        self.pub_pos.publish(self.msg3)


        time.sleep(2.5)
        self.msg3.position = resp3.position
        self.msg7.position = resp7.position
        self.pub_pos.publish(self.msg3)
        time.sleep(0.5) 
        self.pub_pos.publish(self.msg7)

        time.sleep(2)

        self.msg0.position = resp0.position
        self.pub_pos.publish(self.msg0)
        
        time.sleep(1.5)
        self.msg2.position = resp2.position
        self.pub_pos.publish(self.msg2)

        return response


    def init_srv_callback(self, request, response):
        self.get_logger().info('Received service request')
        self.msg0.position = 0
        self.msg1.position = 0
        self.msg2.position = 0
        self.msg3.position = 0
        self.msg4.position = 0
        self.msg5.position = 0
        self.msg6.position = 0
        self.msg7.position = 0

        self.pub_pos.publish(self.msg0)
        self.pub_pos.publish(self.msg1)
        self.pub_pos.publish(self.msg2)
        self.pub_pos.publish(self.msg3)
        self.pub_pos.publish(self.msg4)
        self.pub_pos.publish(self.msg5)
        self.pub_pos.publish(self.msg6)
        self.pub_pos.publish(self.msg7)
        return response
    

def main(args=None):
    rclpy.init(args=args)
    movement_control_node = MovementControl()
    rclpy.spin(movement_control_node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()