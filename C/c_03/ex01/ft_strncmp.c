/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:17:55 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/17 05:20:31 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;
	int				diference;

	index = 0;
	while (index < n && (s1[index] || s2[index]))
	{
		diference = s1[index] - s2[index];
		if (diference)
			return (diference);
		index++;
	}
	return (0);
}
