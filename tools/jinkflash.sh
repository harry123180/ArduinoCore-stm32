#!/bin/bash

echo erase > "$1".jlink
echo loadbin "$1" , 0x8000000 >> "$1".jlink
echo r >> "$1".jlink
echo q >> "$1".jlink

/opt/SEGGER/JLink/JLinkExe -device STM32H725AE -if SWD -speed auto -CommanderScript "$1".jlink
