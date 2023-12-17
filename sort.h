#ifndef SORT_H
#define SORT_H

#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);

void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);

void insertion_sort_list(listint_t **list);

void swap_node(listint_t *a, listint_t *b);

void selection_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);

void swapElement(int *array, size_t size, int *a, int *b);

int Lomutopartiton(int *array, size_t size, size_t lowindex, size_t highindex);

void quickSort(int *array, size_t size, size_t lowindex, size_t highindex);

#endif
