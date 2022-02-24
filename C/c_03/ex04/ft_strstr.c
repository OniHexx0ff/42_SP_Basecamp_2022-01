/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:49:35 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/17 20:16:26 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	index_find;

	index = 0;
	index_find = 0;
	while (str[index] && to_find[index_find])
	{
		if (str[index] == to_find[index_find])
			index_find++;
		else
			index_find = 0;
		index++;
	}
	if (index_find == 0)
		return ((void *) 0);
	str += index - index_find;
	return (str);
}

