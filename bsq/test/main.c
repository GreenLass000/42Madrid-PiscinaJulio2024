/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:34:44 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/24 13:40:56 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/ft.h"

#define BUFFER_LENGHT 1024

int ft_mtoa(char *filename)
{
	int fd;
	char buffer[BUFFER_LENGHT];
	int bytesLeidos;

	fd = open(filename, O_RDONLY);
	if (fd == -1) {
		return 1;
	}
	bytesLeidos = 1;
	while (bytesLeidos > 0)
	{
		bytesLeidos = read(fd, buffer, BUFFER_LENGHT);
		write(1, buffer, bytesLeidos);
	}
	if (bytesLeidos == -1)
	{
		printf("Error al leer el archivo\n");
		close(fd);
		return 1;
	}
	close(fd);
	return (0);
}

char **test(char **map, )
{
	int len = 7;
	char **matriz = (char **)malloc(sizeof(char*) * len + 1);
	if (!matriz)
		return 0;
	int i = 0;
	while (matriz[i])
	{
		matriz[i] = malloc(sizeof(char) * len + 1);
		if (!matriz[i])
			return 0;
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_mtoa(argv[1]);
}