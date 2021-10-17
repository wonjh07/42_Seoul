#ifndef HEADER_H
# define HEADER_H

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);

int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		*get_numbers(char *str, int arr_length);
int		check(int ac);
int		check_double(int **tab, int pos, int num, int arr_length);
int		check_case(int **tab, int pos, int *entry, int arr_length);
int		sqrt_num(int input);

#endif
