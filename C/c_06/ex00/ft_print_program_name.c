/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 04:13:44 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/18 05:57:43 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc > 0)
	{	
		while (argv[0][i])
			write (STDOUT, &argv[0][i++], 1);
		write (STDOUT, "\n", 1);
	}
	return (0);
}
