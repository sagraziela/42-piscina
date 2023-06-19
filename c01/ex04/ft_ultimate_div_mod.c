/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:13:52 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/06 18:29:06 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;
// 	int	*pnt_x;
// 	int	*pnt_y;

// 	x = 10;
// 	y = 3;
// 	pnt_x = &x;
// 	pnt_y = &y;
// 	ft_ultimate_div_mod(pnt_x, pnt_y);
// 	printf("%d, %d", x, y);
// }
