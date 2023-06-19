/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:20:39 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/10 16:39:07 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
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
			if (!(str[i] >= 48 && str[i] <= 57))
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
// 	char	x[] = "1239648abc0";
// 	int		result;

// 	result = ft_str_is_numeric(x);
// 	printf("%i", result);
// }
