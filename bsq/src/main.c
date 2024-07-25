/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:42:37 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/23 20:59:37 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_strlib.h"
#include "../include/ft_square.h"

/**
 * Main
 */
int	main(int argc, char **argv)
{
	int	i;
    char *file[] = {
        "20.ox\n",
        "....................\n",
        "......o..........o..\n",
        "......o.............\n",
        "............o.o.....\n",
        ".......o............\n",
        "..o.o...........o.o.\n",
        "..................o.\n",
        "..o...............o.\n",
        "....................\n",
        "....................\n",
        "...oo...............\n",
        ".o...............o..\n",
        ".....o..............\n",
        ".o........oo.o.o....\n",
        ".......o....o...o...\n",
        "........o.....o.....\n",
        ".o..................\n",
        "........oo..........\n",
        "....o.............o.\n",
        "......o..o.........o\n"
    };
	
	i = 1;
	if (argc < 1)
		return (1);
	// while (i < argc)
	// {
		// ft_whatever(argv[i++]);
	
	char *header = get_header(file);
	if (header != NULL) {
	    // Puedes usar header aquí, ya que process_line ya ha procesado la línea.
	    // Si necesitas hacer más operaciones, hazlo aquí.

	    // Finalmente, libera la memoria
	    free(header);
	} else {
	    write(1, "Header error\n", 13);
	}
	// }
	argv[0] = argv[0];
	return (0);
}
