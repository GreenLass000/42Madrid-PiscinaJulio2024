/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictionary.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:56:26 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/21 23:35:02 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"
#include "../include/ft_strlib.h"
#include "../include/ft_dictionary.h"

char	*ft_strdup(char *s1)
{
	char	*copy;
	int		len;
	int		i;

	len = ft_strlen(s1);
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

char	*find_number_value(char *filename, char *target)
{
	int		fd;
	int		bytes_read;
	char	buffer;
	char	line[BUFFER_SIZE];
	char	*value;
	char	*numbercon;
	char	*val;
	int		line_index;
	int		count;
	char	number[40];

	numbercon = 0;
	count = 0;
	value = NULL;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Error al abrir el archivo\n", 26);
		return (NULL);
	}
	line_index = 0;
	while ((bytes_read = read(fd, &buffer, 1)) > 0)
	{
		if (buffer == '\n' || line_index >= BUFFER_SIZE - 1)
		{
			line[line_index] = '\0';
			ft_strcat(numbercon, ft_number_converted(target));
			while (numbercon[count] != 0)
			{
				ft_strncat(number, numbercon, 3);
				numbercon+=3;
				val = get_number_value(line, number);
			}
			
			if (ft_strcmp(val, "Dict Error\n") != 0)
			{
				value = ft_strdup(val);
				break;
			}
			line_index = 0;
			ft_memset(line, 0, BUFFER_SIZE);
		}
		else
		{
			line[line_index++] = buffer;
		}
	}
	close(fd);
	return (value);
}
