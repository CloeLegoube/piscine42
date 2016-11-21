/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_in_grid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 19:40:25 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/13 19:40:30 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_sudoku.h"

int		ft_not_in_line(int value, int **grid, int line)
{
	int col;
	int number_of_times;

	number_of_times = 0;
	col = 0;
	while (col < 9)
		if (grid[line][col++] == value)
			number_of_times++;
	return (number_of_times);
}

int		ft_not_in_col(int value, int **grid, int col)
{
	int line;
	int number_of_times;

	number_of_times = 0;
	line = 0;
	while (line < 9)
		if (grid[line++][col] == value)
			number_of_times++;
	return (number_of_times);
}

int		ft_not_in_block(int value, int **grid, int line, int col)
{
	int line_block;
	int col_block;
	int number_of_times;

	number_of_times = 0;
	line_block = line - (line % 3);
	col_block = col - (col % 3);
	line = line_block;
	col = col_block;
	while (line < line_block + 3)
	{
		while (col < col_block + 3)
		{
			if (grid[line][col] == value)
				number_of_times++;
			col++;
		}
		line++;
	}
	return (number_of_times);
}
