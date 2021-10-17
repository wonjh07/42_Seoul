/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewon <jaewon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:44:01 by byeokim           #+#    #+#             */
/*   Updated: 2021/10/17 10:31:05 by jaewon           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>

int	solve(int **tab, int *entry, int pos, int arr_length)
{
	int	size;

	if (pos == arr_length * arr_length)
		return (1);
	size = 0;
	while (++size <= arr_length)
	{
		if (check_double(tab, pos, size, arr_length) == 0)
		{
			tab[pos / arr_length][pos % arr_length] = size;
			if (check_case(tab, pos, entry, arr_length) == 0)
			{
				if (solve(tab, entry, pos + 1, arr_length) == 1)
					return (1);
			}
			else
				tab[pos / arr_length][pos % arr_length] = 0;
		}
	}
	return (0);
}

void	display_solution(int **tab, int arr_length)
{
	int	i;
	int	j;

	i = 0;
	while (i < arr_length)
	{
		j = 0;
		while (j < arr_length)
		{
			ft_putnbr(tab[i][j]);
			if (!(j == (arr_length - 1)))
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	sqrt_num(int input)
{
	int	i;

	i = 1;
	while (i < 10)
	{
		if (i == (i + (input / i)) / 2)
			return (i);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	*entry;
	int	leng;
	int	arr_length;
	int	i;
	int	j;
	int	**tab;

	if (check(ac) == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	leng = (ft_strlen(av[1]) + 1) / 2;
	if (!(leng == 16 || leng == 20 || leng == 24 || leng == 28 || leng == 32 || leng ==36))
	{
		ft_putstr("Error\n");
		return (0);
	}
	arr_length = leng / 4;
	tab = (int **)malloc(sizeof(int) * (arr_length * arr_length));
	i = 0;
	while (i < arr_length)
	{
		tab[i] = (int *)malloc(sizeof(int) * (arr_length * arr_length));
		i++;
	}
	i = 0;
	while (i < arr_length)
	{
		j = 0;
		while (j < arr_length)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	entry = get_numbers(av[1], arr_length);
	if (solve(tab, entry, 0, arr_length) == 1)
		display_solution(tab, arr_length);
	else
		ft_putstr("Error\n");
	free(tab);
	return (0);
}
