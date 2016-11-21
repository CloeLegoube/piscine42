/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 18:17:22 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/10 18:17:51 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int mot;
	int lettre;

	mot = 1;
	while (mot < argc)
	{
		lettre = 0;
		while (argv[mot][lettre])
		{
			ft_putchar(argv[mot][lettre]);
			lettre++;
		}
		ft_putchar('\n');
		mot++;
	}
	return (0);
}
