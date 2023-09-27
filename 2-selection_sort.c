#include "sort.h"
/**
 * selection_sort -  sorts an array of integers with Selection sort algorithm
 * @array: array to be sorted
 * @size: array size
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, jmin = 0;
	int temp = 0;

	if (array == NULL || size == 0)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		jmin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[jmin])
			{
				jmin = j;
			}
		}
		if (jmin != i)
		{
			temp = array[i];
			array[i] = array[jmin];
			array[jmin] = temp;
			print_array(array, size);
		}
	}
}
