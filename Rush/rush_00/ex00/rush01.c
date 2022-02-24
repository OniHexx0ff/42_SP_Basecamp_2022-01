/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:44:09 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/07 20:51:45 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
1 verdeiro
0 falso

sides[1]

!1 = 0

!0 = 1

/

*/
void	ft_putchar(char c);

void	ft_printrow(int length, char mid, char *sides, int is_reversed)
{
	
	ft_putchar(sides[!is_reversed]);
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
			ft_printrow(x, '*', "/\\", y == h);
		else
			ft_printrow(x, ' ', "**", 0);
		y--;
	}
}

// rush(5, 5)
// h = 4
// y = 4