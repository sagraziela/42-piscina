/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:22:15 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/06 10:35:10 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_digits(int a, int b, int c, int d)
{
	int	comma;
	int	space;

	comma = 44;
	space = 32;
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &space, 1);
	write (1, &c, 1);
	write (1, &d, 1);
	if (a + b + c + d != 227)
	{
		write (1, &comma, 1);
		write (1, &space, 1);
	}
}

int	g_i = 48;
int	g_j = 48;
int	g_k = 48;
int	g_l = 49;

void	ft_print_comb2(void)
{
	while (g_i <= 57)
	{
		while (g_j <= 57)
		{
			while (g_k <= 57)
			{
				while (g_l <= 57)
				{
					write_digits(g_i, g_j, g_k, g_l);
					g_l++;
				}
				g_k++;
				g_l = 48;
			}
			g_j++;
			g_k = g_i;
			g_l = g_j + 1;
		}
		g_i++;
		g_j = 48;
		g_k = g_i;
		g_l = g_j + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
}
