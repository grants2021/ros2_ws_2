# FTP::Open
#
# :file_path:	used as session id in read/write/close services
# :size:	file size returned for MODE_READ
# :success:	indicates success end of request
# :r_errno:	remote errno if applicapable

uint8 MODE_READ = 0	# open for read
uint8 MODE_WRITE = 1	# open for write
uint8 MODE_CREATE = 2	# do creat()

string file_path
uint8 mode
