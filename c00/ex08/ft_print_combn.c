/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewon <jaewon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 01:43:16 by jaewon            #+#    #+#             */
/*   Updated: 2021/10/12 16:27:48 by jaewon           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putarray(int data[], int nb)
{
	int	c;
	int	count;

	c = 0;
	count = 0;
	while (c < nb)
	{
		if (data[c] == 10 - nb + c)
			count += 1;
		ft_putchar(data[c] + '0');
		c += 1;
	}
	if (count != nb)
		write(1, ", ", 2);
}

void	ft_combn(int data[], int in, int nb)
{
	int	max;
	int	d;

	max = 10 - nb + in;
	while (data[in] <= max)
	{
		if (in == nb - 1)
		{
			ft_putarray(data, nb);
			data[in] += 1;
			ft_combn(data, in, nb);
		}
		else
		{
			ft_combn(data, in + 1, nb);
			data[in] += 1;
			d = in;
			while (d + 1 < nb)
			{
				data[d + 1] = data[d] + 1;
				d += 1;
			}
			ft_combn(data, in, nb);
		}
	}
}

void	ft_print_combn(int nb)
{
	int	data[10];
	int	in;
	int	c;

	c = 0;
	while (c < nb)
	{
		data[c] = c;
		c += 1;
	}
	in = 0;
	ft_combn(data, in, nb);
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
