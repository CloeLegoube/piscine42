/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 10:49:29 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/15 10:49:30 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_check_base(char *base)
{
	int i;
	int j;
	int count;

	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		count = 0;
		while (base[j] != '\0')
		{
			if (base[i] == '+' || base[i] == '-')
				return (0);
			if (base[i] == base[j])
				count++;
			j++;
		}
		if (count > 1)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	i;
	int				j;
	int				size_base;

	i = nbr;
	if (*base && ft_strlen(base) != 1 && ft_check_base(base))
	{
		if (nbr < 0)
		{
			i = -i;
			ft_putchar('-');
		}
		if (i >= ft_strlen(base))
		{
			ft_putnbr_base(i / ft_strlen(base), base);
			ft_putnbr_base(i % ft_strlen(base), base);
		}
		else
		{
			j = -1;
			while (base[++j])
				if (i == j)
					ft_putchar(base[j]);
		}
	}
}
