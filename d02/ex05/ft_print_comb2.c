/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 12:56:28 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/04 12:56:40 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	display_calcul(int nb)
{
	ft_putchar('0' + nb / 10);
	ft_putchar('0' + nb % 10);
}

void	ft_print_comb2(void)
{
	char	number_1;
	char	number_2;

	number_1 = 0;
	number_2 = 0;
	while (number_1 <= 99)
	{
		while (number_2 <= 99)
		{
			if (number_1 < number_2)
			{
				display_calcul(number_1);
				ft_putchar(' ');
				display_calcul(number_2);
				if (number_1 != 98 || number_2 != 99)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			number_2++;
		}
		number_2 = 0;
		number_1++;
	}
}
