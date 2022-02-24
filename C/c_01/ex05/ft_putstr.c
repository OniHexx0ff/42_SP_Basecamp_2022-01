/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 03:24:34 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/14 18:28:32 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define STDOUT 1

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(STDOUT, str, 1);
		str++;
	}
}
