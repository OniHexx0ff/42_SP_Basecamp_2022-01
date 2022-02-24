/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:14:13 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/16 16:11:49 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanumeric(char ch)
{
	int	is_letter;

	is_letter = (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z'));
	return (is_letter || ('0' <= ch && ch <= '9'));
}

int	ft_to_uppercase(char ch)
{
	if ('a' <= ch && ch <= 'z')
		ch -= 32;
	return (ch);
}

int	ft_to_lowercase(char ch)
{
	if ('A' <= ch && ch <= 'Z')
		ch += 32;
	return (ch);
}

char	*ft_strcapitalize(char *str)
{
	int		index;
	char	last_char;

	index = 0;
	last_char = '*';
	while (str[index])
	{
		if (ft_is_alphanumeric(last_char))
			str[index] = ft_to_lowercase(str[index]);
		else
			str[index] = ft_to_uppercase(str[index]);
		last_char = str[index];
		index++;
	}
	return (str);
}
