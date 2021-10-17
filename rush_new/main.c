/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungson <seungson@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:31:08 by seungson          #+#    #+#             */
/*   Updated: 2021/10/17 13:42:56 by seungson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int	main(int argc, char *argv[])
{
	int	**table;
	int	*views;
	int	len;

	if (argc == 2)
	{
		len = (ft_strlen(argv[1]) + 1) / 4 / 2;
		printf("%d\n", len);
		if (len >= 4 || (len % 4 == 0))
		{
			table = ft_get_table(len);
			views = ft_get_views(argv[1], len);
			if (table != 0 && views != 0)
			{
				if (ft_solve(table, views, 0, len) == 1)
					ft_puttable(table, len);
				free(table);
				free(table[0]);
				free(views);
				return (0);
			}
		}
	}
	ft_putstr("Error\n");
	return (1);
}
