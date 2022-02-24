/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:08:38 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/17 05:15:01 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	dest_len;

	index = 0;
	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[index])
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = '\0';
	return (dest);
}
