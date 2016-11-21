/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 23:12:42 by jrobin            #+#    #+#             */
/*   Updated: 2016/08/05 23:12:44 by jrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	draw_line(char left, char middle, char right, int col)
{
	ft_putchar(left);
	if (col > 1)
	{
		while (col - 2 > 0)
		{
			ft_putchar(middle);
			col--;
		}
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	colle(int col, int line)
{
	if (line > 0 && col > 0)
	{
		draw_line('A', 'B', 'C', col);
		if (line > 1)
		{
			while (line - 2 > 0)
			{
				draw_line('B', ' ', 'B', col);
				line--;
			}
			draw_line('C', 'B', 'A', col);
		}
	}
}
