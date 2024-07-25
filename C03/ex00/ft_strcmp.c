/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:11:44 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/17 18:57:53 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Comparing 'hello' and 'hells': %d\n", ft_strcmp("hello", "hells"));
// 	printf("Comparing 'hello' and 'world': %d\n", ft_strcmp("hello", "world"));
// 	printf("Comparing 'abc' and 'abcd': %d\n", ft_strcmp("abc", "abcd"));
// 	printf("Comparing 'abcd' and 'abc': %d\n", ft_strcmp("abcd", "abc"));
// 	printf("Comparing 'apple' and '': %d\n", ft_strcmp("apple", ""));
// 	printf("Comparing '' and 'apple': %d\n", ft_strcmp("", "apple"));
// 	printf("Comparing '' and '': %d\n", ft_strcmp("", ""));
// 	return (0);
// }
