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

#include "header.h"

int		ft_putchar(char c);

void	draw_line(char top, char middle, char bottom, int line)
{
	ft_putchar(top);
	if (line > 1)
	{
		while (line - 2 > 0)
		{
			ft_putchar(middle);
			line--;
		}
		ft_putchar(bottom);
	}
	ft_putchar('\n');
}

void	colle(int line, int col)
{
	if (line > 0 && col > 0)
	{
		draw_line('o', '-', 'o', line);
		if (col > 1)
		{
			while (col - 2 > 0)
			{
				draw_line('|', ' ', '|', line);
				col--;
			}
			draw_line('o', '-', 'o', line);
		}
	}

}
