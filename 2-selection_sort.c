#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array to sort
 * @size: array size
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min_idx, temp, flag;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
				flag = 1;
			}
		}
		temp = array[min_idx];
		array[min_idx] = array[i];
		array[i] = temp;
		if (flag == 1)
			print_array(array, size);
	}
}