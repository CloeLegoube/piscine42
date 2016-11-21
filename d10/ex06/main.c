/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 08:02:17 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/23 08:02:21 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		ft_doop_message(argv[1], argv[2], argv[3]);
	}
	return (0);
}