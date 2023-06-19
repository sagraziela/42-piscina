/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:26:53 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/03 19:18:55 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int	neg;
	int	pos;

	neg = 78;
	pos = 80;
	if (n < 0)
	{
		write (1, &neg, 1);
	}
	else
	{
		write (1, &pos, 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(42);
// }
