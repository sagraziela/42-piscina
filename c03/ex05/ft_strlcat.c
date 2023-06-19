/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:30:38 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/13 18:52:29 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size > dest_len + 1)
	{
		while (src[i] != '\0' && dest_len + 1 + i < size)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
	}
	dest[dest_len + i] = '\0';
	if (size < dest_len)
		return (size + src_len);
	else
		return (dest_len + src_len);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	int result;
// 	int result1;
// 	unsigned int size = 12;
// 	char dest[17] = "hello, ";
// 	char src[] = "pisciner!";
// 	char dest1[17] = "hello, ";
// 	char src1[] = "pisciner!";

// 	result = ft_strlcat(dest, src, size);
// 	printf("dest: %s\n", dest);
// 	printf("my result: %i\n", result);
// 	result1 = strlcat(dest1, src1, size);
// 	printf("dest1: %s\n", dest1);
// 	printf("funtion result: %i\n", result1);
// }

// comando para compilar com a lib <bsd/string.h> :
// gcc -lbsd ft_strlcat.c 
