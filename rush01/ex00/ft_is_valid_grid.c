/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_grid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 20:15:15 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/14 20:15:18 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_sudoku.h"

int		ft_is_valid_grid(int **grid, int line, int col)
{
	while (line < 9)
	{
		while (col < 9)
		{
			if (grid[line][col] != 0)
			{
				if (ft_not_in_line(grid[line][col], grid, line) > 1
				|| ft_not_in_col(grid[line][col], grid, col) > 1
				|| ft_not_in_block(grid[line][col], grid, line, col) > 1)
					return (0);
			}
			col++;
		}
		line++;
		col = 0;
	}
	return (1);
}
