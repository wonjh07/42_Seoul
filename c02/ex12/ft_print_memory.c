/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewon <jaewon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:15:49 by jaewon            #+#    #+#             */
/*   Updated: 2021/10/19 18:59:54 by jaewon           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexb(long nb, int type)
{
	char	*hexnum;

	hexnum = "0123456789abcdef";
	if (nb < 16 && type == 1)
		ft_putchar('0');
	if (nb >= 16)
	{
		ft_hexb(nb / 16, 0);
		ft_hexb(nb % 16, 0);
	}
	else
		ft_putchar(hexnum[nb]);
}

void	ft_print_addr(unsigned long addr)
{
	unsigned long	tmp;
	int				i;
	int				count;

	tmp = addr;
	count = 0;
	while (tmp > 10)
	{
		count++;
		tmp /= 10;
	}
	i = 0;
	while (i < 16 - count)
	{
		ft_putchar('0');
		i++;
	}
	ft_hexb(addr, 0);
}

void	ft_print_data(unsigned char *c, int size)
{
	int		i;

	i = 0;
	while (i <= 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ');
		if (i < size)
			ft_hexb((unsigned long)*(c + i), 1);
		else if (i != 16)
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		i++;
	}
	i = 0;
	while (i < size)
	{
		if (*(c + i) <= 31 || *(c + i) >= 127)
			ft_putchar('.');
		else
			ft_putchar(*(c + i));
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*c;
	unsigned int	maxsize;

	i = 0;
	c = addr;
	while (i * 16 < size)
	{
		if (i < size / 16)
			maxsize = 16;
		else
			maxsize = size % 16;
		ft_print_addr((unsigned long)c + (i * 16));
		ft_putchar(':');
		ft_print_data(c + (i * 16), maxsize);
		ft_putchar('\n');
		i++;
	}
	return (addr);
}
