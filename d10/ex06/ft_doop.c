/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 12:21:06 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/23 12:21:07 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

int		ft_doop(char *a, char *operator, char *b)
{
	int nombre1;
	int nombre2;
	int i;

	nombre1 = ft_atoi(a);
	nombre2 = ft_atoi(b);
	i = 0;
	while (operator[i])
		i++;
	if (i > 1)
		return (0);
	if (*operator == '+')
		return (nombre1 + nombre2);
	if (*operator == '-')
		return (nombre1 - nombre2);
	if (*operator == '*')
		return (nombre1 * nombre2);
	if (*operator == '/')
		return (nombre1 / nombre2);
	if (*operator == '%')
		return (nombre1 % nombre2);
	return (0);
}

void	ft_doop_message(char *a, char *operator, char *b)
{
	int nombre1;
	int nombre2;
	int i;

	nombre1 = ft_atoi(a);
	nombre2 = ft_atoi(b);
	i = 0;
	while (operator[i])
		i++;
	if (i > 1)
		return ;
	if (*operator == '/')
		if (nombre2 == 0)
		{
			write(1, "Stop : division by zero\n", 24);
			return ;
		}
	if (*operator == '%')
		if (nombre2 == 0)
		{
			write(1, "Stop : modulo by zero\n", 22);
			return ;
		}
	ft_putnbr(ft_doop(a, operator, b));
	ft_putchar('\n');
}
