/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 13:24:33 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/15 13:24:37 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == c)
			return (i);
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int sign;
	int index;
	int display;
	int size_base;

	index = 0;
	display = 0;
	sign = 1;
	while (base[index])
		index++;
	size_base = index;
	index = 0;
	while (str[index] == '\t' || str[index] == '\n' || str[index] == '\v' ||
			str[index] == '\f' || str[index] == '\r' || str[index] == ' ')
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while (ft_check_in_base(str[index], base) != -1 && str[index])
		display = display * size_base +
		(ft_check_in_base(str[index++], base)) * sign;
	return (display);
}
