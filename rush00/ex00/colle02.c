/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpilarsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 08:27:45 by dpilarsk          #+#    #+#             */
/*   Updated: 2016/08/06 10:16:13 by dpilarsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_putchar(char c);

void    draw_line(char left, char middle, char right, int col)
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

void    colle(int col, int line)
{
	if (col > 0 && line > 0)
	{
		draw_line('A', 'B', 'A', col);
		if (line > 1)
		{
			while (line - 2 > 0)
			{
				draw_line('B', ' ', 'B', col);
				line--;
			}
			draw_line('C', 'B', 'C', col);
		}
	}
}
