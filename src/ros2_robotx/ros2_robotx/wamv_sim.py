#!/usr/bin/python3
# EASY-INSTALL-ENTRY-SCRIPT: 'ros2-robotx==0.0.0','console_scripts','wamv_sim'
__requires__ = 'ros2-robotx==0.0.0'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('ros2-robotx==0.0.0', 'console_scripts', 'wamv_sim')()
    )
