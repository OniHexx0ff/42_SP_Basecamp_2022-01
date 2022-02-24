/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 04:37:18 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/18 04:40:35 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

int	main(int argc, char *argv[])
{
	int	j;
	int	size;

	size = argc;
	while (size-- > 1)
	{
		j = 0;
		while (argv[size][j])
			write(STDOUT, &argv[size][j++], 1);
		write (STDOUT, "\n", 1);
	}
	return (0);
}
