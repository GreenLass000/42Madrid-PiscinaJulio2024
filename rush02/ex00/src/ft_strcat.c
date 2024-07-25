/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:47:28 by jmarcell          #+#    #+#             */
/*   Updated: 2024/07/19 14:47:30 by jmarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *s1, char *s2)
{
	int	src_leng;
	int	dest_leng;

	src_leng = 0;
	dest_leng = 0;
	while (s1[dest_leng] != 0)
		dest_leng++;
	while (s2[src_leng] != 0)
	{
		s1[dest_leng + src_leng] = s2[src_leng];
		src_leng++;
	}
	s1[dest_leng + src_leng] = 0;
	return (s1);
}
/* 
int	main(void)
{
	char	s1[] = "Hello ";
	char	s2[] = "World!";
    char	s3[] = "Hello ";
	char	s4[] = "World!";

	printf("%s\n", strcat(s1, s2));
	printf("%s\n", ft_strcat(s3, s4));
	return (0);
} */
