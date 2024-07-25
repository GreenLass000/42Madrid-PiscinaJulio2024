/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 07:19:05 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/25 09:59:32 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	result;

	i = 0;
	j = 0;
	result = 0;
	while (dest[i])
		i++;
	while (src[result])
		result++;
	if (size <= i)
		result += size;
	else
		result += i;
	while (src[j] != '\0' && (i + 1) < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (result);
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
	char *dest = "hola";
	char *src = "adios";

	printf("%d\n", ft_strlcat(dest, src, 9));

	return 0;
}

