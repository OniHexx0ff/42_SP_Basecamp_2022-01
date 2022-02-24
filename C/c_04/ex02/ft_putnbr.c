/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:56:59 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/17 17:58:08 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_putchar(char c)
{
	write(STDOUT, &c, 1);
}

int	ft_abs(int n)
{
	if (n == -2147483648)
		return (n - 1);
	return (-n);
}

void	ft_putnbr(int nb)
{
	char	aux[10];
	int		index;
	int		rest;

	rest = (nb % 2147483648) == 0;
	index = 0;
	if (nb == 0)
	{
		return (ft_putchar('0'));
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = ft_abs(nb);
	}
	while (nb > 0)
	{
		aux[index++] = '0' + (nb % 10) + rest;
		nb /= 10;
		rest = 0;
	}
	while (index-- > 0)
	{
		ft_putchar(aux[index]);
	}
}
