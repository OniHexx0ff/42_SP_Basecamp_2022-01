/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:56:59 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/10 00:19:51 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_print_number(int number)
{
	char	digit_left;
	char	digit_right;

	if (number <= 9)
	{
		digit_right = '0' + number;
		write(STDOUT, "0", 1);
		write(STDOUT, &digit_right, 1);
	}
	else
	{
		digit_left = (number / 10) + '0';
		digit_right = (number % 10) + '0';
		write(STDOUT, &digit_left, 1);
		write(STDOUT, &digit_right, 1);
	}
}

void	ft_print_comb2(void)
{
	int	number_right;
	int	number_left;

	number_left = 0;
	number_right = 1;
	while (number_left <= 98)
	{
		if (number_left < number_right)
		{
			ft_print_number(number_left);
			write(STDOUT, " ", 1);
			ft_print_number(number_right);
			if (number_left != 98)
				write(STDOUT, ", ", 2);
		}
		if (number_right == 99)
		{
			number_left++;
			number_right = 0;
		}
		number_right++;
	}
}
