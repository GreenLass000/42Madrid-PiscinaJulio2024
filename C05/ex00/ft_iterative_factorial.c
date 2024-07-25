/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:04:31 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/16 10:22:37 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int numbers[] = {0, 1, 2, 3, 4, 5, 10, -3};
// 	int size = sizeof(numbers) / sizeof(numbers[0]);

// 	for (int i = 0; i < size; i++)
// 	{
// 		int result = ft_iterative_factorial(numbers[i]);
// 		printf("Factorial of %d is %d\n", numbers[i], result);
// 	}
// 	return (0);
// }
