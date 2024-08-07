#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: the pointer to an array of integers
 * @size: the size of the array
 * Return: nothing because void
 */

void selection_sort(int *array, size_t size)
{
	size_t current_idx = 0, search_idx = 0, smallest_idx = 0;
	int temp = 0;

	for (; current_idx < size - 1; current_idx++)
	{
		smallest_idx = current_idx;

		for (search_idx = current_idx + 1; search_idx < size; search_idx++)
		{
			if (array[search_idx] < array[smallest_idx])
				smallest_idx = search_idx;
		}

		if (smallest_idx != current_idx)
		{
			temp = array[current_idx];
			array[current_idx] = array[smallest_idx];
			array[smallest_idx] = temp;
			print_array(array, size);
		}
	}
}
