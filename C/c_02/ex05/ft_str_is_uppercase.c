/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:27:11 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/15 19:39:11 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_upercase_letter(char ch)
{
	return (('A' <= ch && ch <= 'Z'));
}

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (!ft_is_upercase_letter(str[index]))
			return (0);
		index++;
	}
	return (1);
}
