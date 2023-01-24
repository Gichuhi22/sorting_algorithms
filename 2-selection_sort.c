#include "sort.h"


void selection_sort(int *array, size_t size)
{
	size_t i, min_idx, j, temp;

	i = 0;
	j = 0;
	for (j = 0; j < size - 1; j++)
	{
		min_idx = j;
		for (i = j + 1; i < size; i++)
		{
			if (array[i] < array[min_idx])
			{
				min_idx = i;
			}
		}
		if (min_idx != j)
		{
			temp = array[min_idx];
			array[min_idx] = array[j];
			array[j] = temp;
		}
		print_array(array, size);
	}
}
