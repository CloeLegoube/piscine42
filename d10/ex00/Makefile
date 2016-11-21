# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clegoube <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 06:24:24 by clegoube          #+#    #+#              #
#    Updated: 2016/08/23 07:38:53 by clegoube         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
SRC =  srcs/ft_putchar.c srcs/ft_strcmp.c srcs/ft_swap.c \
		srcs/ft_putstr.c srcs/ft_strlen.c
CC = gcc
AR = ar rc -r libft.a ft_putchar.o ft_strcmp.o ft_swap.o ft_putstr.o \
	ft_strlen.o && ranlib libft.a

all: edit

edit :
	${CC} -c ${SRC}
	${AR}

clean :
	rm -f ft_putchar.o ft_strcmp.o ft_swap.o ft_putstr.o ft_strlen.o

fclean : clean
	rm -f libft.a

re : fclean all
