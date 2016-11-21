/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 10:28:47 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/12 10:28:49 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;
	int ascii;

	i = 0;
	ascii = 42;
	while (str[i])
	{
		str[i] = ((str[i] + ascii - 33) % 94) + 33;
		i++;
	}
	return (str);
}
