# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clegoube <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 12:21:20 by clegoube          #+#    #+#              #
#    Updated: 2016/08/23 12:21:21 by clegoube         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC =  ft_doop.c ft_atoi.c ft_putnbr.c ft_putchar.c
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar -rc libft.a ft_doop.o ft_atoi.o ft_putnbr.o ft_putchar.o && ranlib libft.a
HEADER = ft_doop.h
all:
	${CC} -c ${SRC}
	${AR}
	${CC} ${CFLAGS} main.c -I ${HEADER} libft.a -o ${NAME}
clean :
	rm -f ft_doop.o ft_atoi.o ft_putnbr.o ft_putchar.o main.o libft.a

fclean : clean
	rm -f ${NAME}

re : fclean all
