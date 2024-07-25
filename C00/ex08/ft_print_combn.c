/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:29:14 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/24 16:32:43 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_arr(char *num_arr, int n);
void	ft_rec_i(char *num_arr, int n, int current, char i);
void	ft_print_combn(int n);

void	ft_print_combn(int n)
{
	char	arr[10];

	ft_rec_i(arr, n, 1, '0');
}

void	ft_rec_i(char *num_arr, int n, int current, char i)
{
	while (i <= '9' - n + current)
	{
		num_arr[n - current] = i;
		if (n == current)
			ft_print_arr(num_arr, n);
		else
			ft_rec_i(num_arr, n, current + 1, i + 1);
		i++;
	}
}

void	ft_print_arr(char *num_arr, int n)
{
	int		i;

	i = 1;
	while (i <= n)
	{
		if (num_arr[n - i] >= '0' && num_arr[n - i] <= '9')
			write(1, &num_arr[n - i], 1);
		i++;
	}
	if (num_arr[n - 1] != '9' - n + 1)
		write(1, ", ", 2);
}
/* 
int main(void)
{
	ft_print_combn(5);
} */