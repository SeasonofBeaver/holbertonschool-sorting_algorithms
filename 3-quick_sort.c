#include "sort.h"

/**
 * swap - Swaps two integers
 *
 * @first: integer to swap with second
 *
 * @second: integet to swap with first
 */

void swap(int *first, int *second)
{
	int temp = *first;

	*first = *second;
	*second = temp;
}

/**
 * partition - partitions the array
 *
 * @array: the array to be sorted
 *
 * @low: the low element of the partition
 *
 * @high: the high element of the partition
 *
 * @size: the size of the array
 *
 * Return: the pivot element
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j = low;

	for (; j < high ; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		swap(&array[high], &array[i + 1]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_sort_recursively - Recursively sort an array with Quick sort
 *
 * @arr: the array to be sorted
 *
 * @low: the low element of the partition.
 *
 * @high: the high element of the partition.
 *
 * @size: the size of the array
 */

void quick_sort_recursively(int arr[], int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(arr, low, high, size);

		quick_sort_recursively(arr, low, pivot - 1, size);
		quick_sort_recursively(arr, pivot + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers with Quick sort
 *
 * @array: the array to be sorted
 *
 * @size: number of elements in array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursively(array, 0, size - 1, size);
}
