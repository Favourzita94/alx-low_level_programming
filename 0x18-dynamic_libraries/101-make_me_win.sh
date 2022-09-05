#!/bin/bash
wget -P /tmp https://github.com/amarapeace/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/tmp/libtest.so
