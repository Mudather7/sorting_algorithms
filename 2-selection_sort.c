#include "sort.h"
/**
 * selection_sort - function that sorts an array of
 * integers in ascending order using the Selection sort algorithm
 *
 * @array : an array of integer.
 *
 * @size: the size of the array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int swap;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		swap = array[i];
		array[i] = array[min];
		array[min] = swap;
		print_array(array, size);
	}
}
