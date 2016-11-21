/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 10:27:55 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/23 10:27:57 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int check;

	i = 0;
	check = 0;
	while (++i < length)
	{
		if (tab[i - 1] && f(tab[i], tab[i - 1]) <= 0)
			check++;
		else
			check = 0;
	}
	if (check + 1 == i)
		return (1);
	i = 0;
	check = 0;
	while (++i < length)
	{
		if (tab[i - 1] && f(tab[i], tab[i - 1]) > 0)
			check++;
		else
			check = 0;
	}
	return ((check + 1 == i) ? 1 : 0);
}
