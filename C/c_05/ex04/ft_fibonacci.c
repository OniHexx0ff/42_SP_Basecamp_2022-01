/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:18:42 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/18 16:19:01 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fibonacci;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	fibonacci = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (fibonacci);
}
