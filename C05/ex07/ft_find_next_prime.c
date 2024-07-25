/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:05:16 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/15 18:09:08 by marcnava         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_find_next_prime(19));
// }