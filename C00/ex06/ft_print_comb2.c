/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:35:09 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/24 16:36:02 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_print_num(int num);

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_print_num(num1);
			write(1, " ", 1);
			ft_print_num(num2);
			if (num1 != 98)
				write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}

void	ft_print_num(int num)
{
	char	c1;
	char	c2;

	c1 = (num / 10) + '0';
	c2 = (num % 10) + '0';
	write(1, &c1, 1);
	write(1, &c2, 1);
}
