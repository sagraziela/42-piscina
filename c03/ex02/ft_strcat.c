/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:55:54 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/13 19:04:53 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
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
// 	char	dest[] = "hello, ";
// 	char	src[] = "you";
// 	char	dest1[] = "hi,";
// 	char	src1[] = " pisciner";

// 	ft_strcat(dest, src);
// 	printf("my result: %s\n", dest);
// 	strcat(dest1, src1);
// 	printf("test function: %s\n", dest1);
// }
