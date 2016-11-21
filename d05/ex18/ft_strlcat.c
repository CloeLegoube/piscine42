/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 07:24:46 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/15 07:24:48 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int j;
	unsigned int size_src;
	unsigned int size_dest;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size_dest > size)
		size_dest = size;
	j = -1;
	if (size_dest < size - 1)
	{
		while (++j + size_dest < size - 1 && src[j])
			dest[size_dest + j] = src[j];
		dest[size_dest + j] = '\0';
	}
	return (size_dest + size_src);
}
