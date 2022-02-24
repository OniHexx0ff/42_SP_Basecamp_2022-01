/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:44:02 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/10 00:21:10 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_putchar(char c)
{
	write(STDOUT, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int	index;

	index = 122;
	while (index >= 97)
	{
		ft_putchar(index);
		index--;
	}
}
