#include "sort.h"

/**
 * lomuto_partition - considers last element as pivot,
 * places the pivot at the last elements position and
 * smaller elements to the left of it and greater to the
 * right.
 * @arr: array to parttion
 * @size: size of array
 * @start: first element of the array
 * @end: last element of the array
 *
 * Return: interger
 */
size_t lomuto_partition(int *arr, size_t size, ssize_t start, ssize_t end)
{
	int pivot, i, j, tmp;

	pivot = arr[end];
	i = (start - 1);

	for (j = start; j <= end - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;

			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	tmp = arr[i + 1];
	arr[i + 1] = arr[end];
	arr[end] = tmp;
	print_array((const int *)arr, size);

	return (i + 1);
}
/**
 * quicksort - quicksort algorithm implementation with lomuto_parttion
 * @array: address of array to sort
 * @size: size of array to sort
 * @start: beginning of array
 * @end: last element of array
 */
void quicksort(int *array, size_t size, ssize_t start, ssize_t end)
{
	size_t part;

	if (start < end)
	{
		part = lomuto_partition(array, size, start, end);
		quicksort(array, size, start, (part - 1));
		quicksort(array, size, part + 1, end);
	}
}

/**
 * quick_sort - calls quicksort function
 * @array: array to sort
 * @size: size of the array to sort
 *
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	quicksort(array, size, 0, size - 1);
}
