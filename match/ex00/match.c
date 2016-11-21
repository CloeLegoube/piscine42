/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 09:24:39 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/14 09:24:40 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	else if (*s1 == *s2 && *s1 != '*')
		return (match(s1 + 1, s2 + 1));
	else if (*s1 == '*' && *s2 == '*')
		return (match(s1 + 1, s2));
	else if (*s2 == '*' && !*s1)
		return (match(s1, s2 + 1));
	else if (*s2 == '*' && *s2 && *s1)
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	else
		return (0);
	return (0);
}
