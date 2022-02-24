/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:10:37 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/18 15:19:44 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*helper;
	int	index;
	int	diference;

	index = 0;
	diference = max - min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	helper = malloc(sizeof(char) * diference);
	if (helper == NULL)
		return (-1);
	while (min < max)
	{
		helper[index++] = min++;
	}
	*range = helper;
	return (diference);
}
