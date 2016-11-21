/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_colle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 13:45:58 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/21 13:46:02 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	colle(int x, int y);

int		main(int argc, char **argv)
{
	int height;
	int width;

	if (argc == 3)
	{
		height = ft_atoi(argv[1]);
		width = ft_atoi(argv[2]);
		colle(height, width);
	}

	return (0);
}
