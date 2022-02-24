/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:00:49 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/17 19:52:43 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char ch)
{
	return (ch == ' ' || (ch >= '\t' && ch <= '\r'));
}

int	ft_is_decimal_digit(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int	ft_atoi(char *str)
{
	int		number;
	int		is_negative;

	number = 0;
	is_negative = 0;
	while (ft_is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			is_negative++;
	}
	is_negative %= 2;
	while (*str)
	{
		if (!ft_is_decimal_digit(*str))
			break ;
		number *= 10;
		if (is_negative)
			number -= (*str - '0');
		else
			number += (*str - '0');
		++str;
	}
	return (number);
}
