/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictionary.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:23:46 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/21 18:26:44 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICTIONARY_H
# define FT_DICTIONARY_H

void	ft_putstr(char *str);
void	print_line(char *line, int *line_pos);
void	process_buffer(char *buffer, int bytes_read,
			char *line, int *line_pos);
void	read_file_line_by_line(char *filename);
char	*get_number_value(char *line, char *nb);

#endif