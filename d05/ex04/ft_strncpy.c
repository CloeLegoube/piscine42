/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 21:49:08 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/09 21:49:09 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int size)
{
	char *copy_dest;

	copy_dest = dest;
	while (*src != '\0' && size > 0)
	{
		*copy_dest++ = *src++;
		size--;
	}
	while (size > 0)
	{
		*copy_dest++ = '\0';
		size--;
	}
	return (dest);
}
