# tinycdb-windows
Unofficial dirty Windows "port" of Michael Tokarevs TinyCDB project. Added basic CMake build and unistd/getopt. 

## build

You need to install CMake and Visual Studio 2019.

    call "c:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\Tools\VsDevCmd.bat"
    mkdir build
    cmake ..
    cmake --build .

Building release

    cmake --build . --target ALL_BUILD --config Release

## changes

getopt.h
https://github.com/Chunde/getopt-for-windows
License: LGPL

## license

The original code of tinycdb is in the public domain.
getopt header is released under LGPL.
