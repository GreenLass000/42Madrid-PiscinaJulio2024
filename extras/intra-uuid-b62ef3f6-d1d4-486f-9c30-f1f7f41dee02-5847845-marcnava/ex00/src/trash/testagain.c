/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dividir.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbordas- <pbordas-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:48:26 by pbordas-          #+#    #+#             */
/*   Updated: 2024/07/21 20:20:25 by pbordas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void divide_and_print(char input[3]) 
{

	if (input[0] == '\0' || input[1] == '\0' || input[2] == '\0'
		|| input[3] != '\0') 
	{
		return ;
	}

	int part1 = (input[0] - '0') * 100;
	int part2 = (input[1] - '0') * 10;
	int part3 = (input[2] - '0');

	char *buffer1;
	char *buffer2;
	char *buffer3;

	buffer1[0] = (part1 / 100) + '0';
	buffer1[1] = '0';
	buffer1[2] = '0';
	buffer1[3] = '\0';

	buffer2[0] = (part2 / 10) + '0';
	buffer2[1] = '0';
	buffer2[2] = '\0';

	buffer3[0] = part3 + '0';
	buffer3[1] = '\0';


	write(STDOUT_FILENO, buffer1, 3);
	write(STDOUT_FILENO, "\n", 1);
	write(STDOUT_FILENO, buffer2, 2);
	write(STDOUT_FILENO, "\n", 1);
	write(STDOUT_FILENO, buffer3, 1);
	write(STDOUT_FILENO, "\n", 1);

}

int main(int argc, char **argv) {
	char *input = argv[1];
	divide_and_print(input);
	return 0;
}