#!/bin/bash
gcc fpic -c *.c
gcc -shared -o libdynamic.so *.o
