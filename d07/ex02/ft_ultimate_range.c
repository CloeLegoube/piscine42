/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 08:42:18 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/17 08:42:20 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	gap;
	int	i;

	gap = max - min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	tab = (int*)malloc(sizeof(int) * gap);
	if (tab == NULL)
		return (0);
	i = 0;
	while (i < gap)
		tab[i++] = min++;
	*range = tab;
	return (gap);
}
