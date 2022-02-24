/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 03:34:23 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/15 19:42:35 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lowercase_letter(char ch)
{
	return (('a' <= ch && ch <= 'z'));
}

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (!ft_is_lowercase_letter(str[index]))
			return (0);
		index++;
	}
	return (1);
}
