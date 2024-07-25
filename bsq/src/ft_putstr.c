/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:29:07 by jmarcell          #+#    #+#             */
/*   Updated: 2024/07/23 01:48:46 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_putstr(char *str)
{
	int	i;

	if (str == 0)
		return ;
	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
	return ;
}
/*
int	main(void)
{
	char	str[] = "Hello World!";

	ft_putstr(str);
}*/
