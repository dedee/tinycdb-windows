#ifndef _UNISTD_H
#define _UNISTD_H    1

#include <stdlib.h>
#include <io.h>
#include <stdio.h>

#define lseek _lseek
#define read _read
#define write _write

#endif /* unistd.h  */