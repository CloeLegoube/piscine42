/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 18:27:31 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/10 18:27:33 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int mot;
	int lettre;

	mot = argc - 1;
	while (mot > 0)
	{
		lettre = 0;
		while (argv[mot][lettre])
		{
			ft_putchar(argv[mot][lettre]);
			lettre++;
		}
		ft_putchar('\n');
		mot--;
	}
	return (0);
}
