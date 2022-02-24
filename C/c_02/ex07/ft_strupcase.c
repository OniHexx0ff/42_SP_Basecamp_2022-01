/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:48:06 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/15 19:31:11 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lowercase_letter(char ch)
{
	return (('a' <= ch && ch <= 'z'));
}

int	ft_to_upercase(char ch)
{
	return (ch - 32);
}

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (ft_is_lowercase_letter(str[index]))
			str[index] = ft_to_upercase(str[index]);
		index++;
	}
	return (str);
}
