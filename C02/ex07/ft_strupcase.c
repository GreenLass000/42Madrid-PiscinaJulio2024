/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 03:38:12 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/10 04:22:37 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ' ';
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
//     char str1[] = "hello, world!";
//     char str2[] = "HeLLo, WoRLd!";
//     char str3[] = "HELLO, WORLD!";

//     printf("Original: %s\n", str1);
//     printf("Uppercase: %s\n\n", ft_strupcase(str1));

//     printf("Original: %s\n", str2);
//     printf("Uppercase: %s\n\n", ft_strupcase(str2));

//     printf("Original: %s\n", str3);
//     printf("Uppercase: %s\n\n", ft_strupcase(str3));

//     return 0;
// }