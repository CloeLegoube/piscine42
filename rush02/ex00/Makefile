# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clegoube <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/21 08:37:16 by clegoube          #+#    #+#              #
#    Updated: 2016/08/21 08:37:19 by clegoube         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle02
SRC = main.c ft_putchar.c ft_putnbr.c ft_putstr.c
CFLAGS = -Wall -Wextra -Werror
CC=gcc
all : $(NAME)
$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

main.o : $(SRC) header.h
	gcc -c main.c -o main.o

ft_putchar.o : ft_putchar.c
	gcc -c ft_putchar.c -o ft_putchar.o

ft_putnbr.o : ft_putnbr.c
	gcc -c ft_putnbr.c -o ft_putnbr.o

ft_putstr.o : ft_putstr.c
	gcc -c ft_putstr.c -o ft_putstr.o

.PHONY: clean fclean re
.SUFFIX:

clean :
	/bin/rm -rf ft_putchar.o ft_putnbr.o ft_putstr.o

fclean : clean
	/bin/rm -f $(NAME)

rec : fclean c

re : fclean all

c : fclean all
	./$(NAME)

COLLE = colle
SRC = maincolle.c colle01.c ft_putchar.c ft_atoi.c

allcolle : $(COLLE)
$(COLLE):
	gcc $(CFLAGS) -o $(COLLE) $(SRC)

colleclean : clean
	/bin/rm -f $(COLLE)


recolle : colleclean allcolle
