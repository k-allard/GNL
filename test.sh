#!/bin/sh -x

gcc -Wall -Wextra -Werror -D BUFFER_SIZE=50 -g get_next_line.c get_next_line_utils.c main.c

./a.out text1.txt

