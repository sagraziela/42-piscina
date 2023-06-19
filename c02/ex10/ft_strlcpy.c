/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:00:27 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/14 11:11:05 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	else
	{
		while ((i < size - 1) && (src[i] != '\0'))
		{
			dest[i] = src[i];
			i++;
		}
		if (i < size)
		{
			dest[i] = '\0';
		}
		while (src[i] != '\0')
		{
			i++;
		}
		return (i);
	}
}

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	x[] = "oi";
	char	y[] = "Test strlcpy!";
	int		src_length = ft_strlcpy(x, y, 10);

	printf("length: %i\nx: %s\n", src_length, x);
	return (0);
}

//comando para compilar com a lib <bsd/string.h> :
//gcc -lbsd ft_strlcpy.c 
