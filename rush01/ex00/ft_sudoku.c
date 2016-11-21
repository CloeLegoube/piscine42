/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 05:41:06 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/13 05:41:10 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_sudoku.h"
#include <stdio.h>

int		ft_find_solution(int **grid, int position)
{
	int line;
	int col;
	int value;

	line = position / 9;
	col = position % 9;
	if (position == 9 * 9)
		return (1);
	if (grid[line][col] != 0)
		return (ft_find_solution(grid, position + 1));
	value = 0;
	while (value <= 9)
	{
		if (ft_not_in_line(value, grid, line) == 0 &&
		ft_not_in_col(value, grid, col) == 0 &&
		ft_not_in_block(value, grid, line, col) == 0)
		{
			grid[line][col] = value;
			if (ft_find_solution(grid, position + 1))
				return (1);
		}
		value++;
	}
	grid[line][col] = 0;
	return (0);
}

int		ft_sudoku(char **argv)
{
	int		**grid;
	int		i;

	i = 0;
	grid = malloc(9 * sizeof(int*));
	while (i < 9)
		grid[i++] = malloc(9 * sizeof(int));
	ft_initialize_grid(argv, grid);
	if (!ft_check_one_solution(grid) || !ft_is_valid_grid(grid, 0, 0))
	{
		ft_display_errors();
		return (0);
	}
	ft_find_solution(grid, 0);
	ft_display_grid(grid);
	ft_free_space(grid);
	return (0);
}

int		main(int argc, char **argv)
{
	int		j;
	int		k;
	int		nb_case;

	j = 0;
	nb_case = -1;
	if (argc != 10)
	{
		ft_display_errors();
		return (0);
	}
	while (j < 9)
	{
		k = 0;
		while (argv[j + 1][k++] != '\0')
			nb_case++;
		j++;
	}
	if (nb_case != 81)
	{
		ft_display_errors();
		return (0);
	}
	ft_sudoku(argv);
	return (0);
}
