/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:37:28 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/23 00:57:44 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SQUARE_H
# define FT_SQUARE_H

typedef struct s_square
{
	int	row;
	int	column;
	int	size;
}		t_square;

char	*get_header(char **filename);

#endif