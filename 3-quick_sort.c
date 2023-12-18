#include "sort.h"

/**
 * partition - partition the array
 *
 * @array: an array to sort
 *
 * @size: the size of the array
 *
 * @lowindex: the low index of the sort range
 *
 * @highindex: the high index of the sort range
 *
 * Return: size_t
 */
size_t partition(int *array, size_t size, int lowindex, int highindex)
{
	int i = lowindex, j, swap;
	int povit = array[highindex];

	for (j = lowindex; j < highindex; j++)
	{
		if (array[j] < povit)
		{
			swap = array[i];
			array[i] = array[j];
			array[j] = swap;
			if (array[i] != array[j])
				print_array(array, size);
			i++;
		}
	}

	swap = array[i];
	array[i] = array[highindex];
	array[highindex] = swap;
	if (array[i] != array[highindex])
		print_array(array, size);

	return (i);
}

/**
 * QuickSort - recursively sorts array of integers by separating into two
 * partitions, using Lomuto quick sort
 *
 * @array: an array to be sorted
 *
 * @size: the size of the array
 *
 * @lowindex: the low index of the sort range
 *
 * @highindex: the high index of the sort range
 *
 * Return: void
 */
void QuickSort(int *array, size_t size, int lowindex, int highindex)
{
	if (lowindex < highindex)
	{
		int povit;

		povit = partition(array, size, lowindex, highindex);

		QuickSort(array, size, lowindex, povit - 1);
		QuickSort(array, size, povit + 1, highindex);
	}
}

/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 *
 * @array: an array to sort
 *
 * @size: the size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	QuickSort(array, size, 0, size - 1);
}
