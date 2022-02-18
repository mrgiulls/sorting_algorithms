#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: array to sort
 * @size: array size
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int a;

	if (sizeof(array) == 0 || size <= 1)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				a = array[j];
				array[j] = array[j + 1];
				array[j + 1] = a;
				print_array(array, size);
			}
		}
	}
}