# Request a chunk of a log
#
#  :id: - log id from LogEntry message
#  :offset: - offset into the log
#  :count: - number of bytes to get

uint16 id
uint32 offset
uint32 count
