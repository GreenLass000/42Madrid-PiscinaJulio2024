/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 23:13:50 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/23 20:58:53 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"
#include "../include/ft_strlib.h"

#define BUFFER 1024

/* char	*get_header(char *filename)
{
	int		fd;
	char	*line;

	line = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	read(fd, &line, sizeof(char));
	close(fd);
	return (line);
} */

int	check_header(int n, char *line)
{
	if (n < 1)
		return (1);
	if (ft_strlen(line) != 3)
		return (1);
	else
	{
		if (line[0] == line [1] || line[0] == line [2] || line[2] == line [1])
			return (1);
	}
	return (0);
}

void process_line(char *line, int n)
{
	if (check_header(n, line))
	{
		write(1, "map error\n", 10);
		return;
	}

	// Aquí puedes usar line como necesites.
	// Ejemplo: simplemente imprimir la línea
	ft_putstr(line);
}

char	*get_header(char **file)
{
	int		i;
	int		j;
	int		n;
	char	*line;

	i = 0;
	j = 0;
	n = 0;
	line = malloc(sizeof(char) * 3 + 1);
	if (line == NULL)
		return(NULL);
	while (file[0][i] != '\n')
	{
		if (file[0][i] >= '0' && file[0][i] <= '9')
			n = (n * 10) + file[0][i] - '0';
		else
			line[j++] = file[0][i];
		i++;
	}
	line[j] = '\0';
	process_line(line, n);

	return (line);
}
