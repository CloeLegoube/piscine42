/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 12:46:03 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/12 14:56:41 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	return (1 + ft_collatz_conjecture(base % 2 == 0 ? base / 2 : base * 3 + 1));
}
