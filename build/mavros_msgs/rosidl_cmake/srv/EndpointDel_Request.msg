#
# Removes endpoint from router
#

uint8 TYPE_FCU = 0
uint8 TYPE_GCS = 1
uint8 TYPE_UAS = 2

# delete by ID, leave 0 for second option
uint32 id

# delete by url+type pair
string url
uint8 type

