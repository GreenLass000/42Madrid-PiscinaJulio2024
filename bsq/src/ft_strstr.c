/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:17:50 by jmarcell          #+#    #+#             */
/*   Updated: 2024/07/21 16:13:36 by jmarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == 0)
		return (str);
	while (*str)
	{
		i = 0;
		if (*str == to_find[0])
		{
			while (str[i] == to_find[i] && to_find[i])
				i++;
			if (to_find[i] == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char str2[] = "hola pepe como te encuentras hola jose yo me encuentro bien";
	char to_find2[] = "pepee";

	printf("%s\n", ft_strstr(str2, to_find2));
	return (0);
}*/
