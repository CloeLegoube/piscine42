/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 11:52:37 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/12 11:52:40 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int		ft_bouton(int i, int j, int k)
{
	while (!(i < j && j < k))
	{
		if (j < i)
			ft_swap(&i, &j);
		if (k < j)
			ft_swap(&j, &k);
		ft_bouton(i, j, k);
	}
	return (j);
}
