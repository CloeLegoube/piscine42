/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_errors.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 09:52:57 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/14 09:52:59 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_sudoku.h"

void	ft_display_errors(void)
{
	char	*message;
	int		i;

	i = 0;
	message = "Erreur";
	while (message[i])
		ft_putchar(message[i++]);
	ft_putchar('\n');
}
