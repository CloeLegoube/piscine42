/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 08:29:08 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/09 08:29:10 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int result;

	i = 2;
	result = 1;
	if (nb >= 2147483647)
		return (result);
	if (nb <= 0 || nb == 1)
		return (0);
	while (i < nb && i > 1)
	{
		if (nb % i == 0)
			result = 0;
		i++;
	}
	return (result);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 0 || nb == 1 || nb == 2)
		return (2);
	if (ft_is_prime(nb) != 1)
		return (ft_find_next_prime(nb + 1));
	return (nb);
}
