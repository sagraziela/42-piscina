/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:22:17 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/06 14:36:09 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	s[8];
// 	char	*pointer;
// 	int		length;

// 	s[0] = 'G';
// 	s[1] = 'r';
// 	s[2] = 'a';
// 	s[3] = 'z';
// 	s[4] = 'i';
// 	s[5] = 'e';
// 	s[6] = 'l';
// 	s[7] = 'a';
// 	pointer = &s[0];
// 	length = ft_strlen(pointer);
// 	printf("%i", length);
// }
