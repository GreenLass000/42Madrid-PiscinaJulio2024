/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:12:54 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/16 18:49:52 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define BOARD_SIZE 14

int	ft_ten_queens_puzzle(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_safe(int board[BOARD_SIZE], int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row
			|| board[i] - i == row - col
			|| board[i] + i == row + col)
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_solution(int board[BOARD_SIZE])
{
	int	i;

	i = 0;
	while (i < BOARD_SIZE)
	{
		ft_putchar(board[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

void	ft_solve(int board[BOARD_SIZE], int col, int *cont)
{
	int	row;

	row = 0;
	if (col == BOARD_SIZE)
	{
		ft_print_solution(board);
		*cont = *cont +1;
		return ;
	}
	while (row < BOARD_SIZE)
	{
		if (ft_is_safe(board, row, col))
		{
			board[col] = row;
			ft_solve(board, col + 1, cont);
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[BOARD_SIZE];
	int	i;
	int	cont;

	cont = 0;
	i = 0;
	while (i < BOARD_SIZE)
		board[i++] = 0;
	i = 0;
	while (i < 1)
		ft_solve(board, i++, &cont);
	return (cont);
}

 #include <stdio.h>
 #include <time.h>
 int	main(void)
 {
 	int	x;
 	clock_t tiempo_inicio, tiempo_final;
 	double segundos;
 	tiempo_inicio = clock();
 	x = ft_ten_queens_puzzle();
 	printf("numero de soluciones = %d\n", x);
 	tiempo_final = clock();
 	segundos = (double)(tiempo_final - tiempo_inicio) / CLOCKS_PER_SEC;
 	printf("%f segundos de ejecucion \n",segundos); 
 	return (0);
 }
