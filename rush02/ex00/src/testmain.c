/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 22:52:08 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/21 23:05:41 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**divide_and_print(char input[3])
{
	int		part1 = (input[0] - '0') * 100;
	int		part2 = (input[1] - '0') * 10;
	int		part3 = (input[2] - '0');
	char	buffer1[3][4];

	if (input[0] == '\0' || input[1] == '\0' || input[2] == '\0'
		|| input[3] != '\0')
		return (NULL);
	buffer1[0][0] = (part1 / 100) + '0';
	buffer1[0][1] = '0';
	buffer1[0][2] = '0';
	buffer1[0][3] = '\0';
	buffer1[1][0] = (part2 / 10) + '0';
	buffer1[1][1] = '0';
	buffer1[1][2] = '\0';
	buffer1[2][0] = part3 + '0';
	buffer1[2][1] = '\0';
	return (buffer1);
}

/* int main(int argc, char **argv) {
	char *input = argv[1];
	divide_and_print(input);
	return 0;
} */
