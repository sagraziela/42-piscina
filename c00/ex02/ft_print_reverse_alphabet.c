/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:44:25 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/03 19:18:28 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	letter_code;

	letter_code = 122;
	while (letter_code > 96)
	{
		write (1, &letter_code, 1);
		letter_code-- ;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// }
