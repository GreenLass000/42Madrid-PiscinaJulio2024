/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:21:48 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/16 10:33:09 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("2 raised to the power of 3 is %d\n", ft_iterative_power(2, 3));
// 	printf("5 raised to the power of 0 is %d\n", ft_iterative_power(5, 0));
// 	printf("0 raised to the power of 0 is %d\n", ft_iterative_power(0, 0));
// 	printf("0 raised to the power of 5 is %d\n", ft_iterative_power(0, 5));
// 	printf("7 raised to the power of 2 is %d\n", ft_iterative_power(7, 2));
// 	printf("-2 raised to the power of 3 is %d\n", ft_iterative_power(-2, 3));
// 	printf("2 raised to the power of -3 is %d\n", ft_iterative_power(2, -3));

// 	return (0);
// }