/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:48:47 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/10 00:21:05 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_putchar(char c)
{
	write(STDOUT, &c, 1);
}

void	ft_print_numbers(void)
{
	int	index;

	index = 48;
	while (index <= 57)
	{
		ft_putchar(index);
		index++;
	}
}
