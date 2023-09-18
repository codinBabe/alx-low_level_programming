#!/bin/bash
wget -P /tmp https://github.com/codinBabe/alx-low_level_programming/raw/master/0x18-dynamic_libraries/makemewin.so
export LD_PRELOAD=/tmp/makemewin.so
