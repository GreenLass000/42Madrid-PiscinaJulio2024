/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numconversion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:02:10 by pbordas-          #+#    #+#             */
/*   Updated: 2024/07/21 23:38:02 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "../include/ft_strlib.h"

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putstr(char *str) {
    if (*str) {
        write(1, str, 1);
        ft_putstr(str + 1);
    }
}

void ft_putnbr(int nb) {
    if (nb < 0) {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) {
        ft_putnbr(nb / 10);
    }
    ft_putchar((nb % 10) + '0');
}

void pad_with_zeros(char *dest, char *src, int zeros_to_add) {
    if (zeros_to_add > 0) {
        *dest = '0';
        pad_with_zeros(dest + 1, src, zeros_to_add - 1);
    } else if (*src) {
        *dest = *src;
        pad_with_zeros(dest + 1, src + 1, 0);
    } else {
        *dest = '\0';
    }
}

void print_group(char *padded_str, int padded_len, int i, char numbcon[40]) {
    if (i < padded_len / 3) {
        if (i > 0) {
            ft_putchar(' ');
        }
        ft_strcat(numbcon, padded_str + i * 3);
        write(1, padded_str + i * 3, 3);
        ft_putchar(' ');
        ft_putnbr(padded_len - (i + 1) * 3);
        print_group(padded_str, padded_len, i + 1, numbcon);
    }
}

char    *ft_number_converted(char *number) {
    char *input = number;
    char numbconv[40];
    int len = 0;
    while (input[len] != '\0') {
        len++;
    }

    int padded_len = ((len + 2) / 3) * 3;
    char *padded_str = (char *)malloc(padded_len + 1);
    if (!padded_str) {
        return (NULL);
    }

    pad_with_zeros(padded_str, input, padded_len - len);

    print_group(padded_str, padded_len, 0, numbconv);
    ft_putchar('\n');
    
    free(padded_str);
    return (numbconv);
}
