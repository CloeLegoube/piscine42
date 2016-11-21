/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 20:48:32 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/22 20:48:34 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list			*ft_create_elem(void *data)
{
	t_list	*new_element;
	t_list	*temp;

	new_element = (t_list*)malloc(sizeof(t_list));
	new_element->data = data;
	new_element->next = NULL;
	return (new_element);
}
