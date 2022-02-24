/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:34:47 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/10 00:21:13 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_putchar(char c)
{
	write(STDOUT, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	index;

	index = 97;
	while (index <= 122)
	{
		ft_putchar(index);
		index++;
	}
}
