/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 21:42:07 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/09 21:42:11 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

int		ft_atoi(char *str)
{
	int sign;
	int index;
	int display;

	index = 0;
	display = 0;
	sign = 1;
	while (str[index] == '\t' || str[index] == '\n' || str[index] == '\v' ||
			str[index] == '\f' || str[index] == '\r' || str[index] == ' ')
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while ((str[index] >= '0' && str[index] <= '9'))
		display = display * 10 + (str[index++] - '0') * sign;
	return (display);
}
