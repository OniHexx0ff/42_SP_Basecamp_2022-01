/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkRules.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:17:49 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/14 16:22:49 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
void	print_board(int **board,int board_size);
int *transpose_board_col(int **board, int col)
{
	int i;
	int *transposed_row;

	i = 0;
	transposed_row = malloc(4 * sizeof(int));

	while (i < 4)
	{
		transposed_row[i] = board[i][col];
		i++;
	}	
	return transposed_row;
}

int	 *reverse_row(int *row)
{
	int index;
	int	holder;
	int size;
	int *reversed_row;
	
	reversed_row = malloc(4 * sizeof(int));
	size = 4;
	index = 0;
	while (index < size)
	{
		holder = row[index];
		reversed_row[index] = row[size-1];
		reversed_row[size-1] = holder;
		size--;
		index++;
	}
	return reversed_row;
}

int check_amount_towers(int observer, int amount)
{
	if (amount <= observer)
		return 0;
	return 1;
}

int get_amount_towers(int *row)
{
	int i;
	int j;
	int counter;
		
	counter = 1;
	i = 0;
	j = 1;
	while (j < 4)
	{
		if (row[i] < row[j] )
		{
			if (row[i] != 0)
				counter++;
			i++;
		}
			j++;
	}
	return counter;	
}	

int check_number_in_row(int *row, int num)
{
	int i;
	
	i = 0;
	while (i < 4)
	{
		if (row[i] == num)
			return 1;	
		i++;	
	}
	return 0;
}