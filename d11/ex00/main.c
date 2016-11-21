/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 20:50:58 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/22 20:50:59 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		t_list			*new_element;

		new_element = ft_create_elem(argv[1]);
		printf("%s", new_element->data);
	}

}
