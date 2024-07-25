/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:26:28 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/16 04:08:21 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if ((c >= 11 && c <= 15) || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	return (result * sign);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str1[] = "   -toto123";
// 	char str2[] = "42";
// 	char str3[] = "   +56";
// 	char str4[] = "0";
// 	char str5[] = " -++--+-+-+--+--2147483648";

// 	printf("String: '%s' => Integer: %d\n", str1, ft_atoi(str1));
// 	printf("String: '%s' => Integer: %d\n", str2, ft_atoi(str2));
// 	printf("String: '%s' => Integer: %d\n", str3, ft_atoi(str3));
// 	printf("String: '%s' => Integer: %d\n", str4, ft_atoi(str4));
// 	printf("String: '%s' => Integer: %d\n", str5, ft_atoi(str5));

// 	return 0;
// }
