/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 04:28:51 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/18 04:37:14 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			write(STDOUT, &argv[i][j++], 1);
		write (STDOUT, "\n", 1);
		i++;
	}
	return (0);
}
