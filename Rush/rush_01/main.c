/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:23:28 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/14 17:06:55 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define STDOUT 1
#define COL_UP 0
#define COL_DOWN 1
#define ROW_LEFT 2
#define ROW_RIGHT 3

int check_number_in_row(int *row, int num);
int get_amount_towers(int *row);
int check_amount_towers(int observer, int amount);
int *reverse_row(int *row);
int *transpose_board_col(int **board, int col);

void fill_matrix(char *args, int **mat, int board_size)
{
	int i;
	int group;
	int position;

	i = 1;
	group = 0;
	position = 0;
	while(*args)
	{
		if (*args != ' ')
		{
			mat[group][position] = *args - '0';		
			group = i / board_size;
			position = i % board_size;
			i++;
		}
		args++;
	}
}

int	**create_dynamic_matrix(int board_size)
{
	int i;
	int **mat;
	
	i = 0;
	mat = malloc(board_size * sizeof(int *));
	while (i < board_size)
	{
   		mat[i] = malloc(board_size * sizeof (int));
		i++;
	}
	return mat;
}
    
void	print_board(int **board,int board_size)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (i < board_size)
	{
		j = 0;
		while (j < board_size)
		{
			printf("%d ",board[i][j]);
			j++;
		}
			printf("\n");
		i++;
	}
}

int valid(int **board, int **observers, int row, int col, int guess)
{
	int *reversed_row;
	int observer_left;
	int observer_right;
	int amount_right;
	int amount_left;

	observer_left = observers[ROW_LEFT][row];
	observer_right = observers[ROW_RIGHT][row];
	amount_left = get_amount_towers(board[row]);
	reversed_row = reverse_row(board[row]);
	amount_right = get_amount_towers(reversed_row);
	// printf("LEFT RULE %i\n",observer_left);
	// printf("LEFT AMOUNT %i\n",amount_left);
	// printf("RIGHT RULE %i\n",observer_right);
	// printf("RIGHT AMOUNT %i\n",amount_right);
	// printf("ROW %i\n",row);
	// printf("COLL %i\n",col);
	// printf("GUESS %i\n",guess);
	// printf("\n");
	if (check_number_in_row(board[row], guess))
	{
		return 0;
	}
	print_board(board,4);
	// if (check_amount_towers(observer_left, amount_left))
	// 	return 0;
	// if (check_amount_towers(observer_right, amount_right))
	// 	return 0;	 	
	
	return 1;
}
// int valid_col(int **board, int **observers, int col, int guess)
// {
// 	int *transposed_col;
// 	int *transposed_reverted_col;
// 	int observer_left;
// 	int observer_right;
// 	int amount_left;
// 	int amount_right;

	
// 	transposed_col = transpose_board_col(board, col);
// 	amount_left = get_amount_towers(transposed_col);
// 	observer_left = observers[COL_UP][col];
// 	observer_right = observers[COL_DOWN][col];
// 	if (check_number_in_row(transposed_col, guess))
// 		return 0;
	
// 	transposed_reverted_col = reverse_row(transposed_col);
// 	amount_right = get_amount_towers(transposed_reverted_col);
	
// 	if (col % 3 == 0)
// 		if (check_amount_towers(observer_right, amount_right) && check_amount_towers(observer_left, amount_left))
// 			return 0;

// 	return 1;
// }

int find_empty_cell(int **board, int *row, int *column, int board_size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < board_size)
	{
		j = 0;
		while (j < board_size)
		{
			if (!board[i][j])
			{
				*row = i;
				*column = j;
				return 1;
			}
			j++;
		}
		i++;
    }
  return 0;
}

int	solve(int **board, int **observers, int board_size)
{
	int row;
	int column;
	int guess = 1;

	if(!find_empty_cell(board, &row, &column, board_size))
		return 1;

	while (guess < board_size + 1)
	{
		if (valid(board, observers, row, column, guess))
		{
			board[row][column] = guess;
			
			if (solve(board, observers, board_size))
				return 1;
			board[row][column] = 0;
		}
		guess++;
	}
	return 0;
}

int	main(int argc, char *argv[])
{
	// int	board[4][4];
	int **observers;
	int **board;
	int board_size;
	char *default_board;

	default_board = "4321";
	board_size = 4;	
	if (argc >= 1)
	{
		observers = create_dynamic_matrix(board_size);
		board = create_dynamic_matrix(board_size);
		fill_matrix(argv[1], observers, board_size);
		fill_matrix(default_board, board, board_size);
		if (solve(board, observers, board_size))
			print_board(board,board_size);
		else
			printf("\nnão tem solução\n");
	}
	else
		write(STDOUT, "Error\n", 6);
	free(observers);
	free(board);
	return (0);
}
