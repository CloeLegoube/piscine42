/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 09:42:58 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/04 09:55:17 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char number[3];

	number[0] = 0;
	while (number[0] <= 9)
	{
		number[1] = number[0] + 1;
		while (number[1] <= 9)
		{
			number[2] = number[1] + 1;
			while (number[2] <= 9)
			{
				ft_putchar('0' + number[0]);
				ft_putchar('0' + number[1]);
				ft_putchar('0' + number[2]);
				if (number[0] + number[1] + number[2] < 24)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				number[2]++;
			}
			number[1]++;
		}
		number[0]++;
	}
}
