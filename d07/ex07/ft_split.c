/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 18:24:52 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/17 18:24:54 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check_special_char(char chaine, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (chaine == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_malloc_by_word(char *str, char *charset)
{
	int chaine;
	int mot;
	int lettre;

	chaine = 0;
	mot = 0;
	lettre = 0;
	while (str[chaine])
	{
		if (!ft_check_special_char(str[chaine], charset) && str[chaine])
		{
			if (ft_check_special_char(str[chaine + 1], charset)
				|| !str[chaine + 1])
				++mot;
		}
		chaine++;
	}
	return (++mot);
}

void	ft_malloc_by_letter(char **tab, char *str, char *charset)
{
	int chaine;
	int mot;
	int lettre;

	chaine = 0;
	mot = 0;
	lettre = 0;
	while (str[chaine])
	{
		if (!ft_check_special_char(str[chaine], charset) && str[chaine])
		{
			if (ft_check_special_char(str[chaine + 1], charset)
				|| !str[chaine + 1])
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

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		chaine;
	int		mot;
	int		lettre;

	tab = (char**)malloc(ft_malloc_by_word(str, charset) * sizeof(char*));
	ft_malloc_by_letter(tab, str, charset);
	chaine = -1;
	mot = 0;
	lettre = 0;
	while (str[++chaine])
	{
		if (!ft_check_special_char(str[chaine], charset) && str[chaine])
		{
			tab[mot][lettre++] = str[chaine];
			if (ft_check_special_char(str[chaine + 1], charset)
				|| !str[chaine + 1])
			{
				tab[mot++][lettre] = '\0';
				lettre = 0;
			}
		}
	}
	tab[mot] = 0;
	return (tab);
}
