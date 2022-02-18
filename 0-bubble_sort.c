#include "sort.h"

/**
 * bubble_sort - Write a function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array to print
 * @size: size to the array
 * return: new array order
 */

void bubble_sort(int *array, size_t size)
{
    size_t one, j, i;
if (array == NULL)
    return;
for (j = 0 ; j < size - 1; j++)
{
    for (i = 0 ; j < size - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            one = array[i];
            array[i] = array[i + 1];
            array[i + 1] = one;
            print_array(array, size); 
        }

    }
}

}