# Request the Vehicle Info
# use this to request the current target sysid / compid defined in mavros
# set get_all = True to request all available vehicles

uint8 GET_MY_SYSID = 0
uint8 GET_MY_COMPID = 0

uint8 sysid
uint8 compid
bool get_all
