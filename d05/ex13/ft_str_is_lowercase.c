/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 14:13:06 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/11 14:13:09 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;
	int result;

	i = 0;
	result = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			result = 1;
		else
			return (0);
		i++;
	}
	return (result);
}
