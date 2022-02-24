/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:32:24 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/17 21:43:42 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	int				dest_size;

	index = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (index < nb && src[index])
	{
		dest[dest_size + index] = src[index];
		index++;
	}
	dest[dest_size + index] = '\0';
	return (dest);
}
