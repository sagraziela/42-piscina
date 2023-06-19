/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:35:57 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/10 16:47:38 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (str[0] == '\0')
	{
		return (result);
	}
	else
	{
		while (str[i] != '\0')
		{
			if (!(str[i] >= 65 && str[i] <= 90))
			{
				result = 0;
			}
			i++;
		}
		return (result);
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	x[] = "HELlO";
// 	int		result;

// 	result = ft_str_is_uppercase(x);
// 	printf("%i", result);
// }
