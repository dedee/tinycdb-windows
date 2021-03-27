# tinycdb-windows
Unofficial dirty Windows "port" of Michael Tokarevs TinyCDB project. Added basic CMake build and unistd/getopt.

## Build

You need to install CMake and Visual Studio 2019.

    call "c:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\Tools\VsDevCmd.bat"
    mkdir build
    cmake ..
    cmake --build .

Building release

    cmake --build . --target ALL_BUILD --config Release

## Licenses

### The original code of tinycdb is in the public domain.
https://www.corpit.ru/mjt/tinycdb.html

cdb.h: public cdb include file
This file is a part of tinycdb package by Michael Tokarev, mjt@corpit.ru.
Public domain.

### getopt released under LGPL.
https://github.com/Chunde/getopt-for-windows

Declarations for getopt.
Copyright (C) 1989-1994,1996-1999,2001,2003,2004,2009,2010
Free Software Foundation, Inc.
This file is part of the GNU C Library.
The GNU C Library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.
The GNU C Library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.
You should have received a copy of the GNU Lesser General Public
License along with the GNU C Library; if not, write to the Free
Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
02111-1307 USA.

