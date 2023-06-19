/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:43:12 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/06 10:33:12 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_digits(int i, int j, int k)
{
	int	comma;
	int	space;
	// int	period;

	comma = 44;
	space = 32;
	//period = 46;
	write (1, &i, 1);
	write (1, &j, 1);
	write (1, &k, 1);
	if (i != 55)
	{
		write (1, &comma, 1);
		write (1, &space, 1);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 48;
	j = 49;
	k = 50;
	while (i <= 55)
	{
		while (j <= 56)
		{
			while (k <= 57)
			{
				write_digits(i, j, k);
				k++;
			}
			j++;
			k = j + 1;
		}
		j = i + 1;
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
}
