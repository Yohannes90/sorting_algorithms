#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order by Bubble sort
 * @array: array to be sorted
 * @size: array size
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp = 0;

	if (size < 2)
	{
		return;
	}
	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1] && array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
