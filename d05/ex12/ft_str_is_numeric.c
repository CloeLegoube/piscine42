/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 14:07:16 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/11 14:07:19 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;
	int result;

	i = 0;
	result = 1;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = 1;
		else
			return (0);
		i++;
	}
	return (result);
}
