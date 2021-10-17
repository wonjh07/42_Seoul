#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}

int		main (void)
{
	int tab[] = {10, 7, 8, 9, 1, 5, 2, 2, 3, 6};
	int size;
	
	size = 10;

	printf("Original: ");
	putarr(tab, size);

	ft_sort_int_tab(tab, size);

	printf("Modified: ");
	putarr(tab, size);
}
