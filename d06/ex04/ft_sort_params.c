/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 18:34:10 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/10 18:34:13 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_compare(char *tab1, char *tab2)
{
	int lettre;

	lettre = 0;
	while (tab1[lettre] >= tab2[lettre])
		if (tab1[lettre] == tab2[lettre])
			if (tab1[lettre])
				lettre++;
			else
				return (0);
		else
			return (1);
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_string_table(char **tab, int size)
{
	int i;
	int j;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (ft_compare(tab[i], tab[i + 1]))
				ft_swap(&tab[i + 1], &tab[i]);
			i++;
		}
		j++;
	}
}

int		main(int argc, char **argv)
{
	int mot;
	int lettre;

	ft_sort_string_table(argv, argc);
	mot = 1;
	while (mot < argc)
	{
		lettre = 0;
		while (argv[mot][lettre])
		{
			ft_putchar(argv[mot][lettre]);
			lettre++;
		}
		ft_putchar('\n');
		mot++;
	}
	return (0);
}
