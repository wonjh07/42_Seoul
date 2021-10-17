/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungson <seungson@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:32:40 by seungson          #+#    #+#             */
/*   Updated: 2021/10/17 12:32:45 by seungson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_puttable(int **table, int len);

int		ft_strlen(char *str);
int		ft_solve(int **table, int *views, int pos, int len);
int		ft_check_double(int **table, int size, int pos, int len);
int		ft_check_case(int **table, int *views, int pos, int len);
int		*ft_get_views(char *str, int len);
int		**ft_get_table(int len);

#endif
