/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:16:00 by jmarcell          #+#    #+#             */
/*   Updated: 2024/07/24 18:29:47 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		if (i == 0 && (str[i] > 96 && str[i] < 123))
			str[i] = str[i] - 32;
		else if (str[i] > 96 && str[i] < 123)
		{
			if ((str[i - 1] < 47 || str[i - 1] > 58)
				&& (str[i - 1] < 65 || str[i - 1] > 90)
				&& (str[i - 1] < 97 || str[i - 1] > 122))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/* 
int	main(void)
{
	char	str[] = "     ";
char str2[] = "salUt, comMent tu vas ? 42mots quar/ante-deux; cinquante+et+un";
	char    str3[] = "qwa svg13 51 34tAFG GGRH";

	printf("%s\n%s\n%s\n", ft_strcapitalize(str), 
		ft_strcapitalize(str2), ft_strcapitalize(str3));
} */
