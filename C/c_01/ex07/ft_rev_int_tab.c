/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:42:25 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/14 19:39:11 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	holder;

	index = 0;
	while (index < size)
	{
		holder = tab[index];
		tab[index] = tab[size - 1];
		tab[size - 1] = holder;
		size--;
		index++;
	}
}
