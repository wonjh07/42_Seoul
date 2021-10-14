#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {5, 8, 3, 9, 5, 0, 1, 0};
	int	size = 7;

	ft_sort_int_tab(tab, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d", tab[i]);
    }
    return 0;
}
