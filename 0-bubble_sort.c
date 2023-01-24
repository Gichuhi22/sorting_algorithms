#include "sort.h"

/**
 * bubble_sort - sorts array of integers using bubble sort algorithm
 * @array: pointer to the array of integers
 * @size: number of elements in the array *
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
