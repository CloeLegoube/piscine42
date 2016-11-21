/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 19:05:04 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/04 19:05:11 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_combn(int n)
{
	char	number[n];
	int		k;
	int		is_valid;

	k = 0;
	while (k < n)
		number[k++] = 0;
	while (number[0] < 9)
	{
		k = 0;
		is_valid = 1;
		while (++k < n)
			if (number[k - 1] >= number[k])
				is_valid = 0;
		if (is_valid == 1)
		{
			k = 0;
			while (k < n)
				ft_putchar('0' + number[k++]);
			ft_putchar(',');
			ft_putchar(' ');
		}
		while (k > 0 && ++number[--k] > 9)
			number[k] = 0;
	}
}
