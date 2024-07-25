/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 22:24:57 by jmarcell          #+#    #+#             */
/*   Updated: 2024/07/21 23:30:32 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRLIB_H
# define FT_STRLIB_H

int		ft_strlen(char *str);
char	*ft_strstr(char *str);
char	*ft_strcat(char *s1, char *s2);
char	*ft_split(char *str, char *delimiter);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);

#endif