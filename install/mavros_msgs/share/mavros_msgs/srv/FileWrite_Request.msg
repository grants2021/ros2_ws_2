# FTP::Write
#
# Call FTP::Open first.
# :success:	indicates success end of request
# :r_errno:	remote errno if applicapable

string file_path
uint64 offset
uint8[] data
