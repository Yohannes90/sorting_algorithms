#include "sort.h"
/**
 * selection_sort -  sorts an array of integers using the Selection sort algorithm
 * @array: array to be sorted
 * @size: array size
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, temp = 0;
	int jmin;

	if (array == NULL || size < 2)
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
		if (jmin != 1)
		{
			temp = array[i];
			array[i] = array[jmin];
			array[jmin] = temp;
			print_array(array, size);
		}
	}
}