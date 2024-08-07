#include <stdio.h>
#include <stdlib.h>
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
	int temp;
	size_t i, j;
	int swapped = -1;

	for (i = 0; i < (size - 1); i++)
	{
		swapped = 0;

		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped++;
				print_array(array, size);
			}
		}
	}
}
