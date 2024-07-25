/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:18:27 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/15 13:49:31 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			if (str[i] < 'A' || str[i] > 'Z')
				return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
//     char str1[] = "H1elloWorld";
//     char str2[] = "Helloñ";
//     char str3[] = "abcde";

//     printf("Test 1: %d\n", ft_str_is_alpha(str1));
//     printf("Test 2: %d\n", ft_str_is_alpha(str2));
//     printf("Test 3: %d\n", ft_str_is_alpha(str3));

//     return 0;
// }