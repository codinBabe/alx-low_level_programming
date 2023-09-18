#!/bin/bash
gcc -shared -o makemewin.so -fPIC makemewin.c
export LD_PRELOAD=./makemewin.so:$LD_LIBRARY_PATH
