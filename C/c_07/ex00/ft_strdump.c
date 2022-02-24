/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:21:29 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/18 15:18:58 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		index;
	int		len;

	index = 0;
	len = 0;
	while (src[len])
		len++;
	dest = malloc(sizeof(char) * len);
	if (dest == NULL)
		return (NULL);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
