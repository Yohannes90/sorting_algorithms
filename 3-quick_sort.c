#include "sort.h"

/**
 * swap_ints - Swap two integers in an array
 * @a: first integer to be swaped
 * @b: second integer to be swaped
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - order a subset of an array according to lomuto partition
 * @array: array to be sorted
 * @size: array size
 * @left: starting index of the subset to order
 * @right: ending index of the subset to order
 *
 * Return: final partition index.
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot, above, below;

	pivot = array + right;
	for (above = below = left; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap_ints(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}
	if (array[above] > *pivot)
	{
		swap_ints(array + above, pivot);
		print_array(array, size);
	}
	return (above);
}

/**
 * lomuto_sort - implementing the quicksort algorithm through recursion
 * @array: array to be sorted
 * @size: array size
 * @left: starting index of the array partition to order
 * @right: ending index of the array partition to order
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}

/**
 * quick_sort - sorts an array of integers with Quick sort algorithm
 * @array: array to be sorted
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	lomuto_sort(array, size, 0, size - 1);
}
