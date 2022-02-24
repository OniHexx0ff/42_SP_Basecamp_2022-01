/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:44:09 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/06 20:08:10 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printrow(int length, char mid, char sides)
{
	ft_putchar(sides);
	--length;
	while ((length - 1) > 0)
	{
		ft_putchar(mid);
		--length;
	}
	if (length)
		ft_putchar(sides);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	h;

	if (x <= 0 || y <= 0)
		return ;
	h = --y;
	while (y >= 0)
	{
		if (y == 0 || y == h)
			ft_printrow(x, '-', 'o');
		else
			ft_printrow(x, ' ', '|');
		y--;
	}
}
