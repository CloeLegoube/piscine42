/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 13:13:34 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/23 13:13:36 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOP_H
# define FT_DOOP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_doop(char *a, char *operator, char *b);
int		ft_atoi(char *str);
int		ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_doop_message(char *a, char *operator, char *b);

#endif
