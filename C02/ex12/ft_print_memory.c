/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 08:12:14 by jmarcell          #+#    #+#             */
/*   Updated: 2024/07/25 07:11:40 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_print_memory(void **addr, unsigned int size)
{
	char	*hex;
	char	mem;
	unsigned int	i;

	hex = "0123456789abcdef";
	mem = (unsigned char) *addr;
	i = 0;
	while (i < size)
	{
		ft_putchar(hex[mem[i]] / 16);
		ft_putchar(hex[mem[i]] % 16);
		if ((i + 1) % 2 == 0)
			ft_putchar(' ');
		i++;
	}
}