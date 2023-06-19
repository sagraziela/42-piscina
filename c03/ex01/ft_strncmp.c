/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:49:07 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/14 13:09:26 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] == s2[i]) && (i < n - 1) && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	x[] = "hello world";
// 	char	y[]	= "hello wórld";
// 	int		my_res;
// 	int		test_func;

// 	my_res = ft_strncmp(x, y, 10);
// 	test_func = strncmp(x, y, 10);
// 	printf("my_res: %i\n", my_res);
// 	printf("test_func: %i\n", test_func);
// }
