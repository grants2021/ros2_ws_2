# Request set parameter value
#
# That interface allow to bypass some checks
# and send value as is to the FCU if force_set is true.
#
# Use that api only if ROS2 Parameter API is not sufficient
# for your application.

bool force_set
string param_id
rcl_interfaces/ParameterValue value
