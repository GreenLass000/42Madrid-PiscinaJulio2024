/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:47:02 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/20 02:25:12 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc > 1)
	{
		while (argc > 1)
		{
			j = 0;
			while (argv[argc - 1][j])
			{
				ft_putchar(argv[argc - 1][j]);
				j++;
			}
			ft_putchar('\n');
			argc--;
		}
	}
	return (0);
}
