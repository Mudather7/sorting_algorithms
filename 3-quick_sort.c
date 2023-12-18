#include "sort.h"

void quick_sort(int *array, size_t size);
void quickSort(int *array, size_t size, size_t lowindex, size_t highindex);
int Lomutopartiton(int *array, size_t size, size_t lowindex, size_t highindex);
void swapElement(int *array, size_t size, int *a, int *b);

/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 *
 * @array: an array of integer
 *
 * @size: the size of the array
 *
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quickSort(array, size, 0, size - 1);
}

/**
 * quickSort - quicksort algorithm
 *
 * @array: an array of integer
 *
 * @size: the size of the array
 *
 * @lowindex: the low index of the sort range
 *
 * @highindex: the high index of the sort range
 *
 * Return: nothing
 */
void quickSort(int *array, size_t size, size_t lowindex, size_t highindex)
{
	if (lowindex < highindex)
	{
		size_t po;

		po = Lomutopartiton(array, size, lowindex, highindex);

		quickSort(array, size, lowindex, po - 1);
		quickSort(array, size, po + 1, highindex);
	}
}

/**
 * Lomutopartiton - partiton the array
 *
 * @array: an array of integer
 *
 * @size: the size of the array
 *
 * @lowindex: the low index of the sort range
 *
 * @highindex: the high index of the sort range
 *
 * Return: size_t
 */
int Lomutopartiton(int *array, size_t size, size_t lowindex, size_t highindex)
{
	size_t i = (lowindex - 1), j;
	int povit = array[highindex];

	for (j =  lowindex; j <= highindex; j++)
	{
		if (array[j] <= povit)
			swapElement(array, size, &array[j], &array[i++]);
	}
	swapElement(array, size, &array[i + 1], &array[highindex]);

	return (i + 1);
}

/**
 * swapElement - swap two element
 *
 * @array: an array of integer
 *
 * @size: the size of the integer
 *
 * @a: the first element
 *
 * @b: the second element
 *
 * Return: nothing
 */
void swapElement(int *array, size_t size, int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

	print_array(array, size);
}
