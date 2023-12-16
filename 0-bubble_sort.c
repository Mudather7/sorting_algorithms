include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm.
 *
 * @array: the array we need to sort
 *
 * @size: the size of the array
 *
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	int i, j;

	if (!array | !size)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp;

				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
