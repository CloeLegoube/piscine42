# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clegoube <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/20 07:50:16 by clegoube          #+#    #+#              #
#    Updated: 2016/08/20 07:50:19 by clegoube         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRC = main.c lib/ft_putchar.c lib/ft_putnbr.c lib/ft_putstr.c \
	lib/ft_split.c lib/ft_print_words_tables.c lib/ft_strlen.c lib/ft_atoi.c
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)
$(NAME):
	gcc $(CFLAGS) -o $(NAME) $(SRC)

clean :
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f $(NAME)

rec : fclean c

re : fclean all

c : fclean all
	./$(NAME) "3 + 42 * (1 - 2 / (3 + 4) - 1 % 21) + 1"
