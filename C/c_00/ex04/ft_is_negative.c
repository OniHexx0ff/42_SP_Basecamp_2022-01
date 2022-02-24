/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:58:46 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/10 19:17:15 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_putchar(char c)
{
	write(STDOUT, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}
