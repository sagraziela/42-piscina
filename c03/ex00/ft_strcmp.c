/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:54:48 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/13 19:07:10 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	x[] = "hell0";
// 	char	y[]	= "hello";
// 	int		my_res;
// 	int		test_func;

// 	my_res = ft_strcmp(x, y);
// 	test_func = strcmp(x, y);
// 	printf("my_res: %i\n", my_res);
// 	printf("test_func: %i\n", test_func);
// }
