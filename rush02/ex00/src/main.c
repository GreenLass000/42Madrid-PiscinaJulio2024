/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:10:29 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/21 22:49:45 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../include/ft.h"

int main(int argc, char *argv[]) {
	char	*filename;
	char	*target;

	target = argv[1];
	filename = "./dicts/numbers.dict";
	if (argc != 2 && argc != 3)
		return 1;
	if (argc == 3)
	{
		filename = argv[1];
		target = argv[2];
	}
	
	char *value = find_number_value(filename, target);

	if (value != NULL) {
		printf("El valor para '%s' es: %s\n", target, value);
		free(value);
	} else {
		printf("Valor no encontrado para '%s'\n", target);
	}

	return 0;
}
