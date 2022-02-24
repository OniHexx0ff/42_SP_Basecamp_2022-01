/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:01:46 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/15 19:32:52 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_letter(char ch)
{
	return (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z'));
}

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (!ft_is_letter(str[index]))
			return (0);
		index++;
	}
	return (1);
}
