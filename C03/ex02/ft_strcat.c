/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:39:44 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/17 17:38:24 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char dest1[50] = "Hello, ";
// 	char dest2[50] = "Foo";
// 	char src1[] = "World!";
// 	char src2[] = "Bar";

// 	printf("Concatenation of 'Hello, ' and 'World!': %s\n",
// 	ft_strcat(dest1, src1));
// 	printf("Concatenation of 'Foo' and 'Bar': %s\n",
// 	ft_strcat(dest2, src2));

// 	return (0);
// }