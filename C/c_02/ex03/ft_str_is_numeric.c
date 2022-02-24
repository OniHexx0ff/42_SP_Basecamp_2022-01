/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:42:59 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/15 19:43:05 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_number(char ch)
{
	return (('0' <= ch && ch <= '9'));
}

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (!ft_is_number(str[index]))
			return (0);
		index++;
	}
	return (1);
}
