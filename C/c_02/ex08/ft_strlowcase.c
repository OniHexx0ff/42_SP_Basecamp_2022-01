/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:57:03 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/15 19:31:25 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_upercase_letter(char ch)
{
	return (('A' <= ch && ch <= 'Z'));
}

int	ft_to_lowercase(char ch)
{
	return (ch + 32);
}

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (ft_is_upercase_letter(str[index]))
			str[index] = ft_to_lowercase(str[index]);
		index++;
	}
	return (str);
}
