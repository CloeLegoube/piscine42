/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_grid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 19:36:59 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/13 19:37:02 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_sudoku.h"

int		ft_check_grid(int **grid)
{
	int	line;
	int	col;
	int	display_ok;

	line = 0;
	display_ok = 1;
	while (line < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (grid[line][col] == 0)
			{
				display_ok = 0;
				col = 9;
				line = 9;
			}
			col++;
		}
		line++;
	}
	return (display_ok);
}

void	ft_display_grid(int **grid)
{
	int		line;
	int		col;

	line = -1;
	while (++line < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (ft_check_grid(grid))
			{
				ft_putchar(grid[line][col] + '0');
				ft_putchar(' ');
			}
			else
			{
				ft_display_errors();
				col = 9;
				line = 9;
			}
			col++;
		}
		if (ft_check_grid(grid))
			ft_putchar('\n');
	}
}
