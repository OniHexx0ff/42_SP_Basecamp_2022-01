/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:25:22 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/18 22:23:54 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	start;
	int	mid;
	int	end;
	int	sqrt;

	start = 1;
	end = nb / 2;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	while (start <= end)
	{
		mid = (start + end) / 2;
		sqrt = mid * mid;
		if (sqrt == nb)
			return (mid);
		if (sqrt <= nb)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (0);
}
