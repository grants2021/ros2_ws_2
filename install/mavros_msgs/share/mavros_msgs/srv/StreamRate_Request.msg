# sets stream rate
# See REQUEST_DATA_STREAM message

uint8 STREAM_ALL = 0
uint8 STREAM_RAW_SENSORS = 1
uint8 STREAM_EXTENDED_STATUS = 2
uint8 STREAM_RC_CHANNELS = 3
uint8 STREAM_RAW_CONTROLLER = 4
uint8 STREAM_POSITION = 6
uint8 STREAM_EXTRA1 = 10
uint8 STREAM_EXTRA2 = 11
uint8 STREAM_EXTRA3 = 12

uint8 stream_id
uint16 message_rate
bool on_off
