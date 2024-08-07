#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: a pointer of the array of integers
 * @size: the size of the array
 * Return: nothing because void
 */

void bubble_sort(int *array, size_t size)
{
	int temp = 0;
	size_t i = 0;
	int swapped = -1;

	while (swapped != 0)
	{
		swapped = 0;

		for (i = 0; i < (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped++;
				print_array(array, size);
			}
		}
	}
}
