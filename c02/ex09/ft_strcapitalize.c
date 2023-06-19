/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:44:55 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/10 16:57:13 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	is_alpha(char *str, int i)
{
	return ((str[i] >= 65 && str[i] <= 90)
		|| (str[i] >= 97 && str[i] <= 122));
}

char	is_numeric(char *str, int i)
{
	return (str[i] >= 48 && str[i] <= 57);
}

void	char_mode(char *str, int i, int to_uppercase)
{
	if (to_uppercase && (str[i] >= 97 && str[i] <= 122))
	{
		str[i] = str[i] - 32;
		to_uppercase = 0;
	}
	else if (!to_uppercase && (str[i] >= 65 && str[i] <= 90))
	{
		str[i] = str[i] + 32;
		to_uppercase = 0;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	to_uppercase;

	i = 0;
	to_uppercase = 1;
	while (str[i] != '\0')
	{
		char_mode(str, i, to_uppercase);
		if (!is_alpha(str, i) && !is_numeric(str, i))
		{
			to_uppercase = 1;
		}
		else
		{
			str[i] = str[i];
			to_uppercase = 0;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	x[] = "salut, comment tu vas ? 42mots quarante-deux; 
//	cinquante+et+un";

// 	ft_strcapitalize(x);
// 	printf("%s", x);
// }
