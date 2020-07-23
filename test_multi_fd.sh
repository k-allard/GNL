#!/bin/sh -x

gcc -Wall -Wextra -Werror -D BUFFER_SIZE=23 -g get_next_line.c get_next_line_utils.c main_multi_fd.c

./a.out
