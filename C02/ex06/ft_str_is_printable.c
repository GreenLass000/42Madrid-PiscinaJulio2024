/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 03:13:42 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/10 03:35:31 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

// int main(void)
// {
//     char str1[] = "Hello, World!";
//     char str2[] = "Hello\nWorld";
//     char str3[] = "";

//     printf("Test 1: %d\n", ft_str_is_printable(str1));
//     printf("Test 2: %d\n", ft_str_is_printable(str2));
//     printf("Test 3: %d\n", ft_str_is_printable(str3));

//     return 0;
// }