#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gccc -shared -o liball.so *.o
