/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 10:53:26 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/06 10:53:30 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_display_symbol(int nb_star, int nbr_blocks,
	int number_col, int regular_line)
{
	int i;

	i = 0;
	while (number_col++ < nb_star + 1)
	{
		if (nbr_blocks == 2)
			i = 1;
		if (regular_line == -1 && nbr_blocks != 2)
			if (i < nbr_blocks && number_col == (nb_star / 2 - nbr_blocks / 2)
				+ i + 1)
				if (i++ == nbr_blocks / 2 + 1 && nbr_blocks > 4)
					ft_putchar('$');
				else
					ft_putchar('|');
			else
				ft_putchar('*');
		else if (regular_line == 0)
			if ((i < nbr_blocks && number_col
				== (nb_star / 2 - nbr_blocks / 2) + i + 1) ? ++i : 0)
				ft_putchar('|');
			else
				ft_putchar('*');
		else
			ft_putchar('*');
	}
}

void	ft_draw_line(int nb_star, int nb_space,
	int nbr_blocks, int regular_line)
{
	int number_col;

	number_col = 0;
	while (number_col++ < nb_space)
		ft_putchar(' ');
	ft_putchar('/');
	number_col = 0;
	display_symbol(nb_star, nbr_blocks, number_col, regular_line);
	ft_putchar('\\');
	ft_putchar('\n');
}

void	ft_draw_all_lines(int *nbr_line_door,
	int num_line_all, int all_lines, int nbr_blocks)
{
	if (num_line_all == all_lines - nbr_blocks + *nbr_line_door)
	{
		if (num_line_all == all_lines - nbr_blocks / 3 - 1)
			draw_line(num_line_all * 2,
				all_lines - num_line_all, nbr_blocks, -1);
		else
			draw_line(num_line_all * 2,
				all_lines - num_line_all, nbr_blocks, 0);
		(*nbr_line_door)++;
	}
	else
		draw_line(num_line_all * 2, all_lines - num_line_all, nbr_blocks, 1);
}

int		ft_calcul_all_lines(int max_line_display, int nbr_blocks, int all_lines)
{
	int		num_line_all;
	int		num_line_display;
	int		num_line_in_block;
	int		numero_block;
	int		nbr_line_door;

	nbr_line_door = 1;
	num_line_display = 0;
	num_line_in_block = 0;
	num_line_all = 0;
	numero_block = 0;
	while (num_line_display++ < max_line_display)
	{
		if (num_line_in_block == numero_block + 3)
		{
			num_line_all += (numero_block + 3 + 1) / 2;
			numero_block++;
			num_line_in_block = 0;
		}
		if (all_lines)
			draw_all_lines(&nbr_line_door, num_line_all, all_lines, nbr_blocks);
		num_line_in_block++;
		num_line_all++;
	}
	return (num_line_all - 1);
}

void	sastantua(int nbr_blocks)
{
	int		max_line_display;
	int		num_line_all;
	int		num_line_display;
	int		num_line_in_block;
	int		numero_block;

	max_line_display = (nbr_blocks + 2) * (nbr_blocks + 3) / 2 - 3;
	calcul_all_lines(max_line_display, nbr_blocks,
		calcul_all_lines(max_line_display, nbr_blocks, 0));
}
