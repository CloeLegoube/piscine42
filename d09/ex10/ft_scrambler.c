/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 15:10:28 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/12 15:28:51 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int cbis;
	int dbis;
	int bbis;

	cbis = *******c;
	*******c = ***a;
	dbis = ****d;
	****d = cbis;
	bbis = *b;
	*b = dbis;
	***a = bbis;
}
