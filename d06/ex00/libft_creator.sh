#!/bin/sh
gcc -c *.c
ar -r libft.a *.o
ranlib libft.a
[ -f libft.h ]
cat ft*.c | grep -v "//*" | grep "ft_" | grep -v ";" | tr '\t' ' ' | sed 's/^/extern /' | tr '\n' ';' | sed "s/;/;@/g" | tr '@' '\n' >> libft.h
