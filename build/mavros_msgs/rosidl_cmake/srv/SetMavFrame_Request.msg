# Set MAV_FRAME for setpoints

# XXX DEPRECATED

# [[[cog:
# from pymavlink.dialects.v20 import common
#
# def decl_enum(ename, pfx='', bsz=8):
#     enum = sorted(common.enums[ename].items())
#     enum.pop() # remove ENUM_END
#
#     cog.outl("# " + ename)
#     for k, e in enum:
#         sn = e.name[len(ename) + 1:]
#         l = "uint{bsz} {pfx}{sn} = {k}".format(**locals())
#         if e.description:
#             l += ' ' * (40 - len(l)) + ' # ' + e.description
#         cog.outl(l)
#
# decl_enum('MAV_FRAME', 'FRAME_')
# ]]]
# MAV_FRAME
uint8 FRAME_GLOBAL = 0                   # Global (WGS84) coordinate frame + MSL altitude. First value / x: latitude, second value / y: longitude, third value / z: positive altitude over mean sea level (MSL).
uint8 FRAME_LOCAL_NED = 1                # Local coordinate frame, Z-down (x: North, y: East, z: Down).
uint8 FRAME_MISSION = 2                  # NOT a coordinate frame, indicates a mission command.
uint8 FRAME_GLOBAL_RELATIVE_ALT = 3      # Global (WGS84) coordinate frame + altitude relative to the home position. First value / x: latitude, second value / y: longitude, third value / z: positive altitude with 0 being at the altitude of the home location.
uint8 FRAME_LOCAL_ENU = 4                # Local coordinate frame, Z-up (x: East, y: North, z: Up).
uint8 FRAME_GLOBAL_INT = 5               # Global (WGS84) coordinate frame (scaled) + MSL altitude. First value / x: latitude in degrees*1.0e-7, second value / y: longitude in degrees*1.0e-7, third value / z: positive altitude over mean sea level (MSL).
uint8 FRAME_GLOBAL_RELATIVE_ALT_INT = 6  # Global (WGS84) coordinate frame (scaled) + altitude relative to the home position. First value / x: latitude in degrees*10e-7, second value / y: longitude in degrees*10e-7, third value / z: positive altitude with 0 being at the altitude of the home location.
uint8 FRAME_LOCAL_OFFSET_NED = 7         # Offset to the current local frame. Anything expressed in this frame should be added to the current local frame position.
uint8 FRAME_BODY_NED = 8                 # Setpoint in body NED frame. This makes sense if all position control is externalized - e.g. useful to command 2 m/s^2 acceleration to the right.
uint8 FRAME_BODY_OFFSET_NED = 9          # Offset in body NED frame. This makes sense if adding setpoints to the current flight path, to avoid an obstacle - e.g. useful to command 2 m/s^2 acceleration to the east.
uint8 FRAME_GLOBAL_TERRAIN_ALT = 10      # Global (WGS84) coordinate frame with AGL altitude (at the waypoint coordinate). First value / x: latitude in degrees, second value / y: longitude in degrees, third value / z: positive altitude in meters with 0 being at ground level in terrain model.
uint8 FRAME_GLOBAL_TERRAIN_ALT_INT = 11  # Global (WGS84) coordinate frame (scaled) with AGL altitude (at the waypoint coordinate). First value / x: latitude in degrees*10e-7, second value / y: longitude in degrees*10e-7, third value / z: positive altitude in meters with 0 being at ground level in terrain model.
uint8 FRAME_BODY_FRD = 12                # Body fixed frame of reference, Z-down (x: Forward, y: Right, z: Down).
uint8 FRAME_RESERVED_13 = 13             # MAV_FRAME_BODY_FLU - Body fixed frame of reference, Z-up (x: Forward, y: Left, z: Up).
uint8 FRAME_RESERVED_14 = 14             # MAV_FRAME_MOCAP_NED - Odometry local coordinate frame of data given by a motion capture system, Z-down (x: North, y: East, z: Down).
uint8 FRAME_RESERVED_15 = 15             # MAV_FRAME_MOCAP_ENU - Odometry local coordinate frame of data given by a motion capture system, Z-up (x: East, y: North, z: Up).
uint8 FRAME_RESERVED_16 = 16             # MAV_FRAME_VISION_NED - Odometry local coordinate frame of data given by a vision estimation system, Z-down (x: North, y: East, z: Down).
uint8 FRAME_RESERVED_17 = 17             # MAV_FRAME_VISION_ENU - Odometry local coordinate frame of data given by a vision estimation system, Z-up (x: East, y: North, z: Up).
uint8 FRAME_RESERVED_18 = 18             # MAV_FRAME_ESTIM_NED - Odometry local coordinate frame of data given by an estimator running onboard the vehicle, Z-down (x: North, y: East, z: Down).
uint8 FRAME_RESERVED_19 = 19             # MAV_FRAME_ESTIM_ENU - Odometry local coordinate frame of data given by an estimator running onboard the vehicle, Z-up (x: East, y: North, z: Up).
uint8 FRAME_LOCAL_FRD = 20               # Forward, Right, Down coordinate frame. This is a local frame with Z-down and arbitrary F/R alignment (i.e. not aligned with NED/earth frame).
uint8 FRAME_LOCAL_FLU = 21               # Forward, Left, Up coordinate frame. This is a local frame with Z-up and arbitrary F/L alignment (i.e. not aligned with ENU/earth frame).
# [[[end]]] (checksum: 013a057712ce80e0a4bffa7c5e2c05a9)

uint8 mav_frame
