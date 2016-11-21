/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 06:01:25 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/22 06:01:28 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	argument;
	t_stock_par	end_of_tab;
	t_stock_par	*tab;

	tab = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		argument.size_param = ft_strlen(av[i]);
		argument.str = av[i];
		argument.copy = av[i];
		argument.tab = ft_split_whitespaces(av[i]);
		tab[i] = argument;
		i++;
	}
	end_of_tab.str = 0;
	tab[i] = end_of_tab;
	return (tab);
}
