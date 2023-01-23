#include "sort.h"

/**
 * bubble_sort - implementation of bubble sort algorithm
 * @array: pointer to array to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

/**
 * swap - swaps two intergers
 * @x: first int
 * @y: second int
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;

}
