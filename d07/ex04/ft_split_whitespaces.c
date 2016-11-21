/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 12:14:26 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/17 12:14:31 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check_special_char(char chaine)
{
	if ((chaine == ' ' || chaine == '\n' || chaine == '\t'))
		return (1);
	return (0);
}

int		ft_malloc_by_word(char *str)
{
	int chaine;
	int mot;
	int lettre;

	chaine = 0;
	mot = 0;
	lettre = 0;
	while (str[chaine])
	{
		if (!ft_check_special_char(str[chaine]) && str[chaine])
		{
			if (ft_check_special_char(str[chaine + 1]) || !str[chaine + 1])
				++mot;
		}
		chaine++;
	}
	return (++mot);
}

void	ft_malloc_by_letter(char **tab, char *str)
{
	int chaine;
	int mot;
	int lettre;

	chaine = 0;
	mot = 0;
	lettre = 0;
	while (str[chaine])
	{
		if (!ft_check_special_char(str[chaine]) && str[chaine])
		{
			if (ft_check_special_char(str[chaine + 1]) || !str[chaine + 1])
			{
				tab[mot++] = (char*)malloc((lettre + 1) * sizeof(char));
				lettre = 0;
			}
		}
		lettre++;
		chaine++;
	}
	tab[mot] = (char*)malloc((lettre + 1) * sizeof(char));
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		chaine;
	int		mot;
	int		lettre;

	tab = (char**)malloc(ft_malloc_by_word(str) * sizeof(char*));
	ft_malloc_by_letter(tab, str);
	chaine = 0;
	mot = 0;
	lettre = 0;
	while (str[chaine])
	{
		if (!ft_check_special_char(str[chaine]) && str[chaine])
		{
			tab[mot][lettre++] = str[chaine];
			if (ft_check_special_char(str[chaine + 1]) || !str[chaine + 1])
			{
				tab[mot++][lettre] = '\0';
				lettre = 0;
			}
		}
		chaine++;
	}
	tab[mot] = 0;
	return (tab);
}
