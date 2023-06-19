/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:59:02 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/06 19:17:28 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;
// 	int	*pnt_x;
// 	int	*pnt_y;

// 	x = 0;
// 	y = 0;
// 	pnt_x = &x;
// 	pnt_y = &y;
// 	ft_div_mod(12, 3, pnt_x, pnt_y);
// 	printf("%i, %i", *pnt_x, *pnt_y);
// }
