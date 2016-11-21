/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 18:46:40 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/11 18:46:42 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_translate_hour(int hour)
{
	hour %= 12;
	if (hour == 0)
		hour = 12;
	return (hour);
}

char	*ft_translate_time(int hour)
{
	if ((hour % 24) / 12 == 1)
		return ("P.M.");
	else
		return ("A.M.");
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s AND %d.00 %s\n",
		ft_translate_hour(hour), ft_translate_time(hour),
		ft_translate_hour(hour + 1), ft_translate_time(hour + 1));
}
