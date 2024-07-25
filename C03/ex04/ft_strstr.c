/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:01:27 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/25 07:17:00 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*aux;

	aux = str;
	if (*to_find == '\0')
		return (str);
	while (*aux)
	{
		i = 0;
		if (*aux == to_find[0])
		{
			while (aux[i] == to_find[i] && to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (aux);
		}
		aux++;
	}
	return (0);
}
/* 
#include <stdio.h>

int	main(void)
{
	char str1[] = "Hello, World!";
	char str2[] = "Anoche en el bar me tome una cerveza";
	char to_find1[] = ", ";
	char to_find2[] = "Bar";
	char to_find3[] = "bar";

	// printf("Finding ', ' in 'Hello, World!': %s\n", ft_strstr(str1, to_find1));
	// printf("Finding 'Bar' in 'FooBar': %s\n", ft_strstr(str2, to_find2));
	printf("Finding 'Baz' in 'FooBar': %s\n", ft_strstr(str2, to_find3));

	return (0);
}
 */
