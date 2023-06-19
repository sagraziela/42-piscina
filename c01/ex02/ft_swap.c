/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:06:11 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/06 19:24:01 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	a_value;

	a_value = *a;
	*a = *b;
	*b = a_value;
}

// int	main(void)
// {
// 	int	n;
// 	int	m;
// 	int	*pnt_n;
// 	int	*pnt_m;

// 	n = 2;
// 	m = 4;
// 	pnt_n = &n;
// 	pnt_m = &m;
// 	ft_swap(pnt_n, pnt_m);
// 	printf("%i, %i\n", *pnt_n, *pnt_m);
// }
