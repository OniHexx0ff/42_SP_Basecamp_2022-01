/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:32:35 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/18 15:19:26 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	index;
	int	diference;

	index = 0;
	diference = max - min;
	if (min >= max)
	{
		range = NULL;
		return (range);
	}
	range = malloc(sizeof(char) * diference);
	while (min < max)
	{
		range[index++] = min++;
	}
	return (range);
}
