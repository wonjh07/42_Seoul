void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	quicksort(int arr[], int left, int right)
{
	int	pivot;
	int	low;
	int	high;

	if (left <= right)
	{
		pivot = arr[left];
		low = left + 1;
		high = right;
		while (low <= high)
		{
			while (arr[low] <= pivot)
				low += 1;
			while (arr[high] > pivot)
				high -= 1;
			if (low <= high)
				ft_swap(&arr[low], &arr[high]);
		}
		ft_swap(&arr[left], &arr[high]);
		quicksort(arr, left, high - 1);
		quicksort(arr, high + 1, right);
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	left;
	int	right;

	left = 0;
	right = size - 1;
	quicksort(tab, left, right);
}
