/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 08:25:24 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/09 08:25:26 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb > 1 && nb < 13)
		nb = nb * ft_recursive_factorial(nb - 1);
	else
		return (0);
	return (nb);
}
