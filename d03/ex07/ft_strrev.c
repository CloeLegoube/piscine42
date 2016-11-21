/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 16:52:20 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/05 16:52:23 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

char	*ft_strrev(char *p_str)
{
	int size;
	int a;
	int b;

	size = 0;
	while (p_str[size])
		size++;
	a = 0;
	b = size - 1;
	while (a < b)
	{
		ft_swap(&p_str[a], &p_str[b]);
		a++;
		b--;
	}
	return (p_str);
}
