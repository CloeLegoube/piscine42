/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 14:17:31 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/11 14:17:34 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;
	int result;

	i = 0;
	result = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			result = 1;
		else
			return (0);
		i++;
	}
	return (result);
}
