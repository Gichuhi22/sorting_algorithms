#include "sort.h"
#include <stdbool.h>
/**
 *selection_sort - implements selection sort algorithm
 *@array: array pointer
 *@size: number of array elements
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, min_idx, j, temp;
	bool swapped = false;

	if (!array)
		return;

	for (j = 0; j < size - 1; j++)
	{
		min_idx = j;
		for (i = j + 1; i < size; i++)
		{
			if (array[i] < array[min_idx])
			{
				min_idx = i;
				swapped = true;
			}
		}
		if (swapped == true)
		{
			temp = array[min_idx];
			array[min_idx] = array[j];
			array[j] = temp;
			swapped = false;
		}
		print_array(array, size);
	}
}
