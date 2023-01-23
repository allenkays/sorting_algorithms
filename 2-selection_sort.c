#include "sort.h"

/**
 * selection_sort - Algorithm to sort an array
 * @array: address of start of array
 * @size: size of array to be sorted
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, pos, tmp;

	for (i = 0; i < (size - 1); i++)
	{
		pos = i;
		for (j = i + 1; j < size;  j++)
		{
			if (array[pos] > array[j])
				pos = j;
		}
		if (pos != i)
		{
			tmp = array[i];
			array[i] = array[pos];
			array[pos] = tmp;
			print_array(array, size);
		}
	}
}
