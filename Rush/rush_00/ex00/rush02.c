/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:23:50 by jponcian          #+#    #+#             */
/*   Updated: 2022/02/06 21:12:10 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printrow(int length, char mid, char *sides, int is_reversed)
{
	ft_putchar(sides[is_reversed]);
	--length;
	while ((length - 1) > 0)
	{
		ft_putchar(mid);
		--length;
	}
	if (length)
		ft_putchar(sides[is_reversed]);
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
			ft_printrow(x, 'B', "CA", y == h);
		else
			ft_printrow(x, ' ', "BB", 0);
		y--;
	}
}
