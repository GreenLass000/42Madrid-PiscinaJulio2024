/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:52:04 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/23 00:19:34 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_split(char *str, char *delimiter)
{
	int		i;
	char	*aux;
	char	*result;

	aux = str;
	result = "Dict Error\n";
	if (*delimiter == '\0')
		return (result);
	while (*aux)
	{
		i = 0;
		if (*aux == delimiter[0])
		{
			while (aux[i] == delimiter[i] && delimiter[i])
				i++;
			if (delimiter[i] == '\0')
			{
				aux += i;
				result = aux;
				return (result);
			}
		}
		aux++;
	}
	return ("Dict Error\n");
}
