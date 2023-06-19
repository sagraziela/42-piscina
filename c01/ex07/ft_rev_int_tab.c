/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:52:52 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/07 13:14:05 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	rev_i;
	int	rev_tab[size];

	i = 0;
	rev_i = size - 1;
	while (rev_i >= 0)
	{
		rev_tab[i] = tab[rev_i];
		rev_i--;
		i++;
	}
	while (rev_i < size)
	{
		tab[rev_i] = &rev_tab[rev_i];
		rev_i++;
	}
}

int	main(void)
{
	int	i;
	int	s[5];
	int	*pointer;

	i = 0;
	s[0] = 49;
	s[1] = 50;
	s[2] = 51;
	s[3] = 52;
	s[4] = 53;
	pointer = &s[0];
	ft_rev_int_tab(pointer, 5);
	while (i < 5)
	{
		write(1, &pointer[i], 1);
		i++;
	}
}
