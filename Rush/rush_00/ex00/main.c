/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:45:09 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/06 21:11:26 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	ft_is_digit(char c)
{
	return ('0' <= c && c <= '9');
}

int	ft_digit_to_int(char c)
{
	return (c - 48);
}

int	ft_atoi(char *str)
{
	int	number;
	int	is_negative;

	number = 0;
	is_negative = *str == '-';
	if (is_negative || *str == '+')
		++str;
	while (*str)
	{
		if (!ft_is_digit(*str))
			break ;
		number *= 10;
		if (is_negative)
			number -= ft_digit_to_int(*str);
		else
			number += ft_digit_to_int(*str);
		++str;
	}
	return (number);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (argc > 1)
		x = ft_atoi(argv[1]);
	if (argc > 2)
		y = ft_atoi(argv[2]);
	rush(x, y);
	return (0);
}
