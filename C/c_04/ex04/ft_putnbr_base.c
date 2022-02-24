/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:54:22 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/18 01:45:03 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

int	ft_is_valid_base(char *str, int len)
{
	int	has_signal;
	int	has_duplicate;
	int	i;
	int	j;

	i = 0;
	j = 0;
	has_signal = 0;
	has_duplicate = 0;
	while (str[i] && (!has_duplicate || !has_signal))
	{
		if (str[i] == '-' || str[i] == '+' )
			has_signal = 1;
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				has_duplicate = 1;
			j++;
		}
		i++;
	}
	if (len > 1 && !has_signal && !has_duplicate)
		return (1);
	return (0);
}	

void	ft_putnbr_base(int nbr, char *base)
{
	char	number[100];
	int		index;
	int		base_len;
	int		helper;

	index = 0;
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (!ft_is_valid_base(base, base_len))
		return ;
	if (nbr == 0)
		write(STDOUT, &base[0], 1);
	if (nbr < 0)
		write(STDOUT, "-", 1);
	while (nbr != 0)
	{
		helper = (nbr % base_len);
		if (helper < 0)
			helper *= -1;
		number[index++] = base[helper];
		nbr /= base_len;
	}
	while (index-- > 0)
		write(STDOUT, &number[index], 1);
}
