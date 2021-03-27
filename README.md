# tinycdb-windows
Unofficial dirty Windows "port" of Michael Tokarevs TinyCDB project. Added basic CMake build and unistd/getopt. 

## build

You need to install CMake and Visual Studio 2019.

    call "c:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\Tools\VsDevCmd.bat"
    mkdir build
    cmake ..
    cmake --build .

## changes

unistd.h
https://gist.github.com/mbikovitsky/39224cf521bfea7eabe9

getopt.h
https://gist.github.com/superwills/5815344

## license

The original code of tinycdb is in the public domain.

