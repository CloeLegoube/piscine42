/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 08:04:27 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/17 08:04:30 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*tab;
	int	gap;
	int	i;

	if (min >= max)
		return (0);
	gap = max - min;
	tab = (int*)malloc(gap * sizeof(*tab));
	if (tab == NULL)
		return (0);
	i = 0;
	while (i < gap)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
