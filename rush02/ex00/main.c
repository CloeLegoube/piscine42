/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 08:42:10 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/21 08:42:14 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list *add_link(t_list *list, char *str)
{
	t_list *tmp;

	tmp =  malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->str = str;
		tmp->next = list;
	}
	return (tmp);
}

void print_list(t_list *list)
{
	while (list != 0)
	{
		ft_putstr(list->str);
		list = list-> next;
	}
}


int main(int ac, char **av)
{
	char ret;
	char buf(BUFF_SIZE + 1); // ou malloc

	t_list *list;
	list = NULL;
	while (ret  =  read(1, buff, 2))
	{
		if (ret = -1)
			return (putstr("Erreur"))
		buf[ret] = '\0';
		add_link(&list, buf[ret]);
		ft_putnbr(ret);
		ft_putstr(buf);
	}

	print_list(list);
	return (0);
}
