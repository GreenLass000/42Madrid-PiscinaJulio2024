/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 02:04:49 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/13 08:41:45 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
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

// int main(void)
// {
//     char	src[] = "Hello, world!";
//     char	dest[50];
//     unsigned int	n = 5;

//     printf("Source: %s\n", src);
//     ft_strncpy(dest, src, n);
//     dest[n] = '\0';
//     printf("Destination after strncpy: %s\n", dest);

//     return 0;
// }
