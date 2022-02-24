/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:53:28 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/18 00:44:35 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		write(STDOUT, &str[index], 1);
		index++;
	}
}
