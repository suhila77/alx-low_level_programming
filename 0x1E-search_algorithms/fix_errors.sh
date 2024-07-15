#!/bin/bash

# Convert DOS line endings to Unix (LF)
dos2unix *.c

# Remove trailling whitespaces
send -i 's/[[:space:]]\+$//' *.c
