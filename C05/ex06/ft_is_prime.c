/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:46:30 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/15 18:04:46 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	cont;

	i = 1;
	cont = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
			cont++;
		i++;
	}
	if (cont != 2)
		return (0);
	return (1);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_is_prime(4));
// 	return (0);
// }