#!/bin/bash
wget -P /tmp https://github.com/yahyaalx/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libertest.so
export LD_PRELOAD=/$PWD/libertest.so
