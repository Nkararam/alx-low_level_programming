#!/bin/bash
gcc -c *.c
gcc -shared -o libdynamic.so *.o
