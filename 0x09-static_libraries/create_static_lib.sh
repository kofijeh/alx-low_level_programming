#!/bin/bash
gcc -Wall -Westra -Werror -pedantic -c *.c
ar rc liball.a *.o
