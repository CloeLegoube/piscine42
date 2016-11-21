/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_one_solution.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 20:13:16 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/14 20:13:20 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_sudoku.h"

int		ft_check_one_solution(int **grid)
{
	int		line;
	int		col;
	int		count_agr_number;

	line = -1;
	count_agr_number = 0;
	while (++line < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (grid[line][col] != 0)
			{
				count_agr_number++;
			}
			col++;
		}
	}
	if (count_agr_number >= 17)
		return (1);
	return (0);
}
