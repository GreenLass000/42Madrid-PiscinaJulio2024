/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 10:13:52 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/17 18:03:07 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0' && i < nb)
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
// 	char src2[] = "BarBaz";

// 	printf("Concatenation of 'Hello, ' and 'World!' with 3 characters: %s\n",
// 	ft_strncat(dest1, src1, 3));
// 	printf("Concatenation of 'Foo' and 'BarBaz' with 3 characters: %s\n",
// 	ft_strncat(dest2, src2, 3));

// 	return (0);
// }