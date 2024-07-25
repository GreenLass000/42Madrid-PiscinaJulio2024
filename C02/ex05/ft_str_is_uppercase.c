/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:52:01 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/10 03:18:16 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	char str1[] = "HELLOWORLD";
// 	char str2[] = "HelloWorld";
// 	char str3[] = "";

// 	printf("Test 1: %d\n", ft_str_is_uppercase(str1));
// 	printf("Test 2: %d\n", ft_str_is_uppercase(str2));
// 	printf("Test 3: %d\n", ft_str_is_uppercase(str3));

// 	return (0);
// }