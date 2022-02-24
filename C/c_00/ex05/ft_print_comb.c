/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:03:47 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/10 17:01:58 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_print_comb(void)
{
	char	position[3];

	position[0] = '0';
	position[1] = '1';
	position[2] = '2';
	while (position[0] != '7')
	{
		if (position[2] == '9' + 1)
		{
			position[2] = ++position[1] + 1;
		}
		if (position[1] == '8' + 1)
		{
			position[1] = ++position[0] +1;
			position[2] = position[1] + 1;
		}
		write(STDOUT, position, 3);
		if (position[0] != '7')
			write(STDOUT, ", ", 2);
		position[2]++;
	}
}
