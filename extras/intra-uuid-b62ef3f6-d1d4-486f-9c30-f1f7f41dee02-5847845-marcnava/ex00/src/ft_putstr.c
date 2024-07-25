/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:29:07 by jmarcell          #+#    #+#             */
/*   Updated: 2024/07/15 17:27:57 by jmarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
		write(1, str++, 1);
}
/*
int	main(void)
{
	char	str[] = "Hello World!";

	ft_putstr(str);
}*/