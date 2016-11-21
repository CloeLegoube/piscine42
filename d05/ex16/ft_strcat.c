/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 14:46:54 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/11 14:46:56 by clegoube         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int j;
	int size_dest;
	int size_src;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	j = 0;
	while (j <= size_src + 1)
		dest[size_dest++] = src[j++];
	return (dest);
}
