/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeokim <byeokim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:43:36 by byeokim           #+#    #+#             */
/*   Updated: 2021/10/16 20:43:41 by byeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>

int	check(int ac)
{
	if (ac != 2)
		return (1);
	return (0);
}

int	*get_numbers(char *str, int arr_length)
{
	int	i;
	int	j;
	int	*arr;

	arr = (int *)malloc(sizeof(int) * (arr_length * 4));
	if (!(arr))
		return (0);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] >= '0' && str[i] <= '9')
			arr[j++] = str[i] - '0';
	return (arr);
}
