/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fastrada < fastrada@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 04:41:34 by fastrada          #+#    #+#             */
/*   Updated: 2022/02/18 11:50:41 by fastrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

int	ft_strcmp(char *s1, char *s2)
{
	int	index;
	int	diference;

	index = 0;
	while (s1[index] || s2[index])
	{
		diference = s1[index] - s2[index];
		if (diference)
			return (diference);
		index++;
	}
	return (0);
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		i;
	int		j;
	char	*helper;

	i = size - 1;
	while (i > 0)
	{
		j = 0;
		while (j < i)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				helper = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = helper;
			}
			j++;
		}
		i--;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	**aux;

	i = 0;
	j = 0;
	aux = ++argv;
	argc--;
	ft_sort_int_tab(aux, argc);
	i = 0;
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
