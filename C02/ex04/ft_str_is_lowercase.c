/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:44:55 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/13 08:39:34 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

// int main(void)
// {
//     char str1[] = "helloworld";
//     char str2[] = "HelloWorld";
//     char str3[] = "";

//     printf("Test 1: %d\n", ft_str_is_lowercase(str1));
//     printf("Test 2: %d\n", ft_str_is_lowercase(str2));
//     printf("Test 3: %d\n", ft_str_is_lowercase(str3));

//     return 0;
// }