/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungson <seungson@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:31:27 by seungson          #+#    #+#             */
/*   Updated: 2021/10/17 13:29:28 by seungson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

int	*ft_get_views(char *str, int len)
{
	int	*views;
	int	view_i;
	int	str_i;

	views = (int *)malloc(sizeof(int) * len * 4);
	if (!views)
		return (0);
	view_i = 0;
	str_i = 0;
	while (str[str_i + 1] != '\0')
	{
		if (str[str_i] >= '0' && str[str_i] <= '9')
		{
			views[view_i] = str[str_i] - '0';
			view_i++;
		}
		str_i++;
	}
	return (views);
}

void	ft_init_table(int **table, int len)
{
	int	row_i;
	int	col_i;

	row_i = 0;
	while (row_i < len)
	{
		col_i = 0;
		while (col_i < len)
		{
			table[row_i][col_i] = 0;
			col_i++;
		}
		row_i++;
	}
}

int	**ft_get_table(int len)
{
	int	**table;
	int	i;

	table = (int **)malloc(sizeof(int *) * len);
	if (!table)
		return (0);
	table[0] = (int *)malloc(sizeof(int) * len * len);
	if (!table[0])
		return (0);
	i = 0;
	while (++i < len)
		table[i] = table[i - 1] + len;
	ft_init_table(table, len);
	return (table);
}

int	ft_solve(int **table, int *views, int pos, int len)
{
	int	size;

	if (pos == len * len)
		return (1);
	size = 0;
	while (++size <= len)
	{
		if (ft_check_double(table, size, pos, len) == 0)
		{
			table[pos / len][pos % len] = size;
			if (ft_check_case(table, views, pos, len) == 0)
			{
				if (ft_solve(table, views, pos + 1, len) == 1)
					return (1);
			}
			else
				table[pos / len][pos % len] = 0;
		}
	}
	return (0);
}

int	ft_check_double(int **table, int size, int pos, int len)
{
	int	i;

	i = 0;
	while (i < (pos / len))
	{
		if (table[i][pos % len] == size)
			return (1);
		i++;
	}
	i = 0;
	while (i < (pos % len))
	{
		if (table[pos / len][i] == size)
			return (1);
		i++;
	}
	return (0);
}
