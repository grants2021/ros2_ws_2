
# MAVLink command: DO_VTOL_TRANSITION
# https://mavlink.io/en/messages/common.html#MAV_CMD_DO_VTOL_TRANSITION

std_msgs/Header header

# MAV_VTOL_STATE
uint8 STATE_MC = 3
uint8 STATE_FW = 4

uint8 state              # See enum MAV_VTOL_STATE.

