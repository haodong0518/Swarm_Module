import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/haodong/Swarm_Module/Swarm_Module_ws/install/dynamixel_motor'
