# MAVLink message: DO_MOUNT_CONTROL
# https://mavlink.io/en/messages/common.html#MAV_CMD_DO_MOUNT_CONFIGURE

std_msgs/Header header

uint8 mode              # See enum MAV_MOUNT_MODE.
#MAV_MOUNT_MODE
uint8 MODE_RETRACT = 0
uint8 MODE_NEUTRAL = 1
uint8 MODE_MAVLINK_TARGETING = 2
uint8 MODE_RC_TARGETING = 3
uint8 MODE_GPS_POINT = 4

bool stabilize_roll     # stabilize roll? (1 = yes, 0 = no)
bool stabilize_pitch    # stabilize pitch? (1 = yes, 0 = no)
bool stabilize_yaw      # stabilize yaw? (1 = yes, 0 = no)
uint8 roll_input        # roll input (See enum MOUNT_INPUT)
uint8 pitch_input       # pitch input (See enum MOUNT_INPUT)
uint8 yaw_input         # yaw input (See enum MOUNT_INPUT)

#MOUNT_INPUT
uint8 INPUT_ANGLE_BODY_FRAME = 0
uint8 INPUT_ANGULAR_RATE = 1
uint8 INPUT_ANGLE_ABSOLUTE_FRAME = 2
