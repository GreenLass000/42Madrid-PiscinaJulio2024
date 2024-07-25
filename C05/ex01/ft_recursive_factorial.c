/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:12:48 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/16 10:28:45 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int numbers[] = {0, 1, 2, 3, 4, 5, 10, -3};
// 	int size = sizeof(numbers) / sizeof(numbers[0]);

// 	for (int i = 0; i < size; i++)
// 	{
// 		int result = ft_recursive_factorial(numbers[i]);
// 		printf("Factorial of %d is %d\n", numbers[i], result);
// 	}
// 	return (0);
// }