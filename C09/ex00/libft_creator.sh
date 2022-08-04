#!/bin/sh
cc="gcc"
src=*.c
flags="-c -Wall -Werror -Wextra"
lib_name="libft.a"

$cc $flags $src
ar rc $lib_name *.o
ranlib $lin_name
rm *.o