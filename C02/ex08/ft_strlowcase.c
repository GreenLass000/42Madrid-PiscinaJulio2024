/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 04:25:57 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/10 05:26:41 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += ' ';
		i++;
	}
	return (str);
}

// int main(void)
// {
//     char str1[] = "Hello, World!";
//     char str2[] = "HeLLo, WoRLd!";
//     char str3[] = "HELLO, WORLD!";

//     printf("Original: %s\n", str1);
//     printf("Lowercase: %s\n\n", ft_strlowcase(str1));

//     printf("Original: %s\n", str2);
//     printf("Lowercase: %s\n\n", ft_strlowcase(str2));

//     printf("Original: %s\n", str3);
//     printf("Lowercase: %s\n\n", ft_strlowcase(str3));

//     return 0;
// }