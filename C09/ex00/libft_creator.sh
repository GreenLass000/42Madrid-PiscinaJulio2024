# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 15:14:55 by marcnava          #+#    #+#              #
#    Updated: 2024/07/20 15:30:13 by marcnava         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

# Compile all files specified into object files .o using -c argument
cc -Wall -Wextra -Werror -c \
    ft_putchar.c \
    ft_putstr.c \
    ft_strcmp.c \
    ft_strlen.c \
    ft_swap.c

# Creates a new library using all object files .o and setting the name
# to libft.a
ar rc libft.a *.o

# Creates an index of the library.
ranlib libft.a

# End of script