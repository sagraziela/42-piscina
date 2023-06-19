/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:48:07 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/10 16:38:09 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
			if (!(str[i] >= 65 && str[i] <= 90)
				&& !((str[i] >= 97 && str[i] <= 122)))
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
// 	char	x[] = "hello";
// 	int		result;

// 	result = ft_str_is_alpha(x);
// 	printf("%i", result);
// }
