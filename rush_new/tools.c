/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungson <seungson@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:22:52 by seungson          #+#    #+#             */
/*   Updated: 2021/10/17 13:27:41 by seungson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(10 % 10 + '0');
}

void	ft_puttable(int **table, int len)
{
	int	row_i;
	int	col_i;

	row_i = 0;
	while (row_i < len)
	{
		col_i = 0;
		while (col_i < len)
		{
			ft_putnbr(table[row_i][col_i]);
			if (col_i != len - 1)
				ft_putchar(' ');
			col_i++;
		}
		ft_putchar('\n');
		row_i++;
	}
}
