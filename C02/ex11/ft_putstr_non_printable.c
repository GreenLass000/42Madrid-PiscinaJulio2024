/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:06:34 by jmarcell          #+#    #+#             */
/*   Updated: 2024/07/25 01:17:49 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != 0)
	{
		if ((unsigned char)str[i] < ' ' || (unsigned char)str[i] > '~')
		{
			write(1, "\\", 1);
			write(1, &hex[(unsigned char)str[i] / 16], 1);
			write(1, &hex[(unsigned char)str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	// write(1, "\n", 1);
	return ;
}
/* 
int	main(void)
{
	char	str[] = "\200";
	char	str2[] = "aarg\nwgEFGE";
	char	str3[] = "AGG\123GE";

	// printf("%d\n%d\n%d\n", ft_str_is_printable(str),
	// 	ft_str_is_printable(str2), ft_str_is_printable(str3)); 
	ft_putstr_non_printable(str);
	ft_putstr_non_printable(str2);
	ft_putstr_non_printable(str3);
} */
