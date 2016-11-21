/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 16:50:49 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/17 16:50:52 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_print_words_tables(char **string, char *charset)
{
	int		i;
	char	**tab;

	i = 0;
	tab = malloc(255 * sizeof(char*));
	tab = ft_split(*string, charset);
	while (tab[i])
	{
		ft_putstr(tab[i++]);
		ft_putchar('\n');
	}
	free(tab);
}
