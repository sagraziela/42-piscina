/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:46:35 by gde-souz          #+#    #+#             */
/*   Updated: 2023/06/13 13:33:02 by gde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int main(void)
// {
// 	char x[] = "olá";
// 	char y[] = "hello";

// 	ft_strncpy(x, y, 4);
// 	printf("x = %s", x);
// }

//comando para compilar com a lib <bsd/string.h> :
//gcc -lbsd ft_strncpy.c 
