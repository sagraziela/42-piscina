/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:25:43 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/03 19:18:15 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	letter_code;

	letter_code = 97;
	while (letter_code < 123)
	{
		write (1, &letter_code, 1);
		letter_code++ ;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// }
