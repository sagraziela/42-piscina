/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:17:35 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/14 13:17:13 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		while (str[i] == to_find[i] && to_find[i] != '\0')
			i++;
		if (to_find[i] == '\0')
			return (str);
		str++;
	}
	return ((void *) 0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dest[] = "this is the 42 piscine";
// 	char	find[] = "isc";
// 	char	*res;
// 	char	*res1;

// 	res = ft_strstr(dest, find);
// 	printf("my result: %s\n", res);
// 	res1 = strstr(dest, find);
// 	printf("test function: %s\n", res1);
// }
