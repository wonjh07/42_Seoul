/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungson <seungson@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:39:03 by seungson          #+#    #+#             */
/*   Updated: 2021/10/17 12:56:26 by seungson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_row_left(int **table, int *views, int pos, int len)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % len == len - 1)
	{
		while (i < len)
		{
			if (table[pos / len][i] > max)
			{
				max = table[pos / len][i];
				count++;
			}
			i++;
		}
		if (views[(len * 2) + pos / len] != count)
			return (1);
	}
	return (0);
}

int	ft_check_row_right(int **table, int *views, int pos, int len)
{
	int	i;
	int	max;
	int	count;

	i = len;
	max = 0;
	count = 0;
	if (pos % len == len - 1)
	{
		while (--i >= 0)
		{
			if (table[pos / len][i] > max)
			{
				max = table[pos / len][i];
				count++;
			}
		}
		if (views[(len * 3) + pos / len] != count)
			return (1);
	}
	return (0);
}

int	ft_check_col_down(int **table, int *views, int pos, int len)
{
	int	i;
	int	max;
	int	count;

	i = len - 1;
	max = 0;
	count = 0;
	if (pos / len == len - 1)
	{
		while (i >= 0)
		{
			if (table[i][pos % len] > max)
			{
				max = table[i][pos % len];
				count++;
			}
			i--;
		}
		if (views[len + pos % len] != count)
			return (1);
	}
	return (0);
}

int	ft_check_col_up(int **table, int *views, int pos, int len)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / len == len - 1)
	{
		while (i < len)
		{
			if (table[i][pos % len] > max)
			{
				max = table[i][pos % len];
				count++;
			}
			i++;
		}
		if (views[pos % len] != count)
			return (1);
	}
	return (0);
}

int	ft_check_case(int **table, int *views, int pos, int len)
{
	if (ft_check_row_left(table, views, pos, len) == 1)
		return (1);
	if (ft_check_row_right(table, views, pos, len) == 1)
		return (1);
	if (ft_check_col_down(table, views, pos, len) == 1)
		return (1);
	if (ft_check_col_up(table, views, pos, len) == 1)
		return (1);
	return (0);
}
