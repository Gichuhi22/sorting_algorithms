#include "sort.h"
/**
 * shell_sort - implements the shell sort algorithm
 * @array: pointer to array to be sorted
 * @size: size of array
 */

void shell_sort(int *array, size_t size)
{
	size_t interval = 1, inner, outer;
	int valueToInsert;

	if (!array || size < 2)
		return;

	while (interval < (size / 3))
	{
		interval = (interval * 3) + 1;
	}

	while (interval > 0)
	{
		outer = interval;
		while (outer < size)
		{
			valueToInsert = array[outer];
			inner = outer;
			while ((inner > interval - 1) && (array[inner - interval] >= valueToInsert))
			{
				array[inner] = array[inner - interval];
				inner -= interval;
			}
			array[inner] = valueToInsert;
			outer += 1;
		}
		interval = ((interval - 1) / 3);
		print_array(array, size);
	}
}
