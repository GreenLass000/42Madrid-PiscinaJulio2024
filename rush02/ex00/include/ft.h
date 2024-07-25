/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:25:01 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/21 23:35:54 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFFER_SIZE 256

char	*find_number_value(char *filename, char *target);
char	**divide_and_print(char input[3]);
char	*get_number_value(char *line, char *nb);
char    *ft_number_converted(char *number);

#endif
