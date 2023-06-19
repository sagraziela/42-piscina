/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:49:32 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/13 19:03:52 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while ((j < nb) && (src[j] != '\0'))
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dest[10] = "hello, ";
// 	char	src[] = "pisciner!";
// 	char	dest1[10] = "hello, ";
// 	char	src1[] = "pisciner!";

// 	ft_strncat(dest, src, 6);
// 	printf("my result: %s\n", dest);
// 	strncat(dest1, src1, 6);
// 	printf("test function: %s\n", dest1);
// }
