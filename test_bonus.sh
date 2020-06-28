#!/bin/sh -x

gcc -Wall -Wextra -Werror -D BUFFER_SIZE=23 -g get_next_line_bonus.c get_next_line_utils_bonus.c main_bonus.c

./a.out
