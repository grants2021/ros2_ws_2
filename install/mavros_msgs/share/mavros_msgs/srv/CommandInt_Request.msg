# Generic COMMAND_INT

bool broadcast # send this command in broadcast mode

uint8 frame
uint16 command
uint8 current
uint8 autocontinue
float32 param1
float32 param2
float32 param3
float32 param4
int32 x	# latitude in deg * 1E7 or local x * 1E4 m
int32 y	# longitude in deg * 1E7 or local y * 1E4 m
float32 z	# altitude
