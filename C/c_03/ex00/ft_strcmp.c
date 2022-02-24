/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:42:56 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/17 15:08:25 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	index;
	int	diference;

	index = 0;
	while (s1[index] || s2[index])
	{
		diference = s1[index] - s2[index];
		if (diference)
			return (diference);
		index++;
	}
	return (0);
}
