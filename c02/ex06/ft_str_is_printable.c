/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:39:15 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/10 16:50:05 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
			if (!(str[i] >= 32 && str[i] <= 126))
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
// 	char	x[] = "Hello, you!";
//     //char    y[] = "Õ_DLE_DC1";
// 	int		result;

// 	result = ft_str_is_printable(x);
// 	printf("%i", result);
// }
