/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 09:18:17 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/23 09:18:19 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *table;

	table = (int *)malloc((length + 1) * sizeof(int));
	i = 0;
	while (i < length)
	{
		table[i] = f(tab[i]);
		i++;
	}
	table[i] = 0;
	return (table);
}
