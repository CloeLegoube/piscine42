# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clegoube <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/10 19:03:00 by clegoube          #+#    #+#              #
#    Updated: 2016/08/10 19:03:05 by clegoube         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
gcc -c *.c
ar -r libft.a *.o
ranlib libft.a
[ -f libft.h ]
cat ft*.c | grep -v "//*" | grep "ft_" | grep -v ";" | tr '\t' ' ' | sed 's/^/extern /' | tr '\n' ';' | sed "s/;/;@/g" | tr '@' '\n' >> libft.h
