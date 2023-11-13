#!/bin/bash

find . -regex ".*.c" -exec gcc -c -fPIC {} +
gcc -shared -o liball.so *.o
