#!/bin/bash

find . -regex ".*.c" -exec gcc -c {} +
ar rs liball.a *.o

