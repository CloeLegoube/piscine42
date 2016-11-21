/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 15:57:59 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/04 15:58:02 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int		nb1;
	int		nb2;

	if (nb == 0)
	{
		ft_putchar('0');
	}
	else
	{
		if (nb < 0)
		{
			nb = nb * -1;
			ft_putchar('-');
		}
		nb1 = nb / 10;
		nb2 = nb % 10;
		if (nb1 > 0)
		{
			ft_putnbr(nb1);
		}
		ft_putchar(nb2 + 48);
	}
}
