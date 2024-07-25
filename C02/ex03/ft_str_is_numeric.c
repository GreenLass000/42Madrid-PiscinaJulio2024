/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:35:22 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/10 03:08:07 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

// int main(void)
// {
//     char	str1[] = "123456";
//     char	str2[] = "123a56";
//     char	str3[] = "";

//     printf("Test 1: %d\n", ft_str_is_numeric(str1));
//     printf("Test 2: %d\n", ft_str_is_numeric(str2));
//     printf("Test 3: %d\n", ft_str_is_numeric(str3));

//     return 0;
// }