/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 07:14:46 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/20 07:14:49 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
//
// void	ft_transform_number(char **string, char *charset)
// {
// 	int		i;
// 	char	**tab;
//
// 	i = 0;
// 	tab = malloc(255 * sizeof(char*));
// 	tab = ft_split(*string, charset);
// 	while (tab[i])
// 	{
// 		if (tab[i][0] < '0' && tab[i][0] > '9')
// 			tab[i] = ft_atoi(tab[i]);
// 		i++;
// 	}
// 	free(tab);
// }
int	calculate(char left, char operator, char right)
{
	if (operator == '+')
		return (ft_atoi(&left) + ft_atoi(&right));
	if (operator == '-')
		return (ft_atoi(&left) - ft_atoi(&right));
	if (operator == '/')
		return (ft_atoi(&left) / ft_atoi(&right));
	if (operator == '%')
		return (ft_atoi(&left) % ft_atoi(&right));
	if (operator == '*')
		return (ft_atoi(&left) * ft_atoi(&right));
	return (0);
}


// char	*ft_putnbr_base(int nbr)
// {
// 	int		display;
// 	int		k;
// 	int		i;
// 	char	*temp;
//
// 	k = 0;
// 	if (nbr < 0)
// 		if ((nbr = -nbr))
// 			tab[k++] = '-';
// 	display = 0;
// 	i = 0;
// 	temp = (char*)malloc(256 * sizeof(char));
// 	while (nbr != 0)
// 	{
// 		temp[i++] = display * 10 + nbr % 10;
// 		nbr = nbr / 10;
// 	}
// 	// while (i-- > 0)
// 	// 	tab[k++] = base[0 + temp[i]];
// 	return (temp);
// }

char	*ft_itoa(int nb)
{
	unsigned int i;
	char *string;
	int		display;

	i = nb;
	display = 0;
	if (nb < 0)
	{
		i = -i;
		ft_putchar('-');
	}
	string = (char*)malloc(256 * sizeof(char));
	while (nb != 0)
	{
		string[i++] = display * 10 + nb % 10;
		nb = nb / 10;
	}
	return (string);
}


int	eval_expr(char *string)
{
	int		i;
	// int		j;
	int		a;
	char	**tab;
	char	**segment;
	int		calcul;
	// int		size;

	i = 0;
	tab = ft_split(string, "()");
	// i = 0;
	// size  = ft_strlen(*tab);
	// ft_putnbr(size);
	while (tab[i])
	{
		ft_putstr(tab[i]);
		segment = ft_split(tab[i], " ");
		a = 0;
		while (segment[a])
			a++;
		if (a == 3)
		{
			ft_putchar('|');  ft_putnbr(a);ft_putchar('|');
			calcul = calculate(*segment[0], *segment[1], *segment[2]);

			ft_putstr(ft_itoa(calcul));
			//tab[i] = calcul(*segment[0], *segment[1], *segment[2]);
			tab[i] = ft_itoa(calcul);
		}
		i++;
		ft_putchar('\n');
	}
	ft_putchar('\n');
	i = 0;
	while (tab[i])
	{
		ft_putstr(tab[i++]);
		ft_putchar('\n');
	}
	free(tab);
	return (0);
}


int main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	else
	{
		ft_putstr("Erreur, entrez un calcul");
	}
return (0);
}
