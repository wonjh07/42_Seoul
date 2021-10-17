/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeokim <byeokim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:44:28 by byeokim           #+#    #+#             */
/*   Updated: 2021/10/16 20:44:30 by byeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_double(int **tab, int pos, int num, int arr_length)
{
	int	i;

	i = -1;
	while (++i < pos / arr_length)
		if (tab[i][pos % arr_length] == num)
			return (1);
	i = -1;
	while (++i < pos % arr_length)
		if (tab[pos / arr_length][i] == num)
			return (1);
	return (0);
}

int	check_col_up(int **tab, int pos, int *entry, int arr_length)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / arr_length == arr_length - 1)
	{
		while (i < arr_length)
		{
			if (tab[i][pos % arr_length] > max)
			{
				max = tab[i][pos % arr_length];
				count++;
			}
			i++;
		}
		if (entry[pos % arr_length] != count)
			return (1);
	}
	return (0);
}

int	check_row_right(int **tab, int pos, int *entry, int arr_length)
{
	int	i;
	int	max;
	int	count;

	i = arr_length;
	max = 0;
	count = 0;
	if (pos % arr_length == arr_length - 1)
	{
		while (--i >= 0)
		{
			if (tab[pos / arr_length][i] > max)
			{
				max = tab[pos / arr_length][i];
				count++;
			}
		}
		if (entry[(arr_length * 3) + pos / arr_length] != count)
			return (1);
	}
	return (0);
}

int	check_col_down(int **tab, int pos, int *entry, int arr_length)
{
	int	i;
	int	max;
	int	count;

	i = arr_length - 1;
	max = 0;
	count = 0;
	if (pos / arr_length == arr_length - 1)
	{
		while (i >= 0)
		{
			if (tab[i][pos % arr_length] > max)
			{
				max = tab[i][pos % arr_length];
				count++;
			}
			i--;
		}
		if (entry[arr_length + pos % arr_length] != count)
			return (1);
	}
	return (0);
}

int	check_row_left(int **tab, int pos, int *entry, int arr_length)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % arr_length == arr_length - 1)
	{
		while (i < arr_length)
		{
			if (tab[pos / arr_length][i] > max)
			{
				max = tab[pos / arr_length][i];
				count++;
			}
			i++;
		}
		if (entry[(arr_length * 2) + pos / arr_length] != count)
			return (1);
	}
	return (0);
}

int	check_case(int **tab, int pos, int *entry, int arr_length)
{
	if (check_row_left(tab, pos, entry, arr_length) == 1)
		return (1);
	if (check_row_right(tab, pos, entry, arr_length) == 1)
		return (1);
	if (check_col_down(tab, pos, entry, arr_length) == 1)
		return (1);
	if (check_col_up(tab, pos, entry, arr_length) == 1)
		return (1);
	return (0);
}
