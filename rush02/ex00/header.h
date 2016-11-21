/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 08:44:34 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/18 08:44:37 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define BUFF_SIZE 4096

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_list t_list;

struct s_list
{
	char *str;
	t_list *next;
};

/***********************************/
t_list *		add_link(t_list * list, char *str);
void 			print_list(t_list * list);
extern int		ft_atoi(char *str);
extern void		ft_print_words_tables(char **string, char *charset);
extern int		ft_putchar(char c);
extern void		ft_putnbr(int nb);
extern void		ft_putstr(char *str);
extern char		**ft_split_whitespaces(char *str);
extern char		**ft_split(char *str, char *charset);
extern int		ft_str_is_alpha(char *str);
extern int		ft_str_is_numeric(char *str);
extern int		ft_strlen(char *str);
extern char		*ft_strstr(char *src, char *to_find);
extern void		ft_swap(int *a, int *b);
extern int		ft_strcmp(char *s1, char *s2);
extern char		*ft_concat_params(int argc, char **argv);
extern char		*ft_itoa(int nb);

#endif
