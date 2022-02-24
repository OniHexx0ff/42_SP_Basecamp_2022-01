/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:40:24 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/15 19:30:51 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_printable_char(char ch)
{
	return ((32 <= ch && ch <= 126));
}

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (!ft_is_printable_char(str[index]))
			return (0);
		index++;
	}
	return (1);
}
