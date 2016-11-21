/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 16:18:20 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/11 16:18:22 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int j;
	int size_dest;

	size_dest = ft_strlen(dest);
	j = 0;
	while (j <= nb + 1)
	{
		if (j < nb)
			dest[size_dest] = src[j];
		else
			dest[size_dest] = '\0';
		j++;
		size_dest++;
	}
	return (dest);
}
