/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_grid.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 19:33:54 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/13 19:33:58 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_sudoku.h"

void	ft_initialize_grid(char **argv, int **grid)
{
	int col;
	int line;

	line = 0;
	while (line < 9)
	{
		col = 0;
		while (col < 9)
		{
			grid[line][col] = (argv[line + 1][col] == '.' ?
			'0' : argv[line + 1][col]) - '0';
			col++;
		}
		line++;
	}
}
