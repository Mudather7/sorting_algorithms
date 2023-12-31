#include "sort.h"
/**
 * insertion_sort_list -  function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 *
 * @list: double linked list
 *
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	j = (*list)->next;

	while (j)
	{
		i = j;
		j = j->next;

		while (i && i->prev)
		{
			if (i->prev->n > i->n)
			{
				swap_node(i->prev, i);
				if (!i->prev)
					*list = i;
				print_list((const listint_t *)*list);
			}
			else
				i = i->next;
		}
	}
}

/**
 * swap_node - swap two nodes in double linked list.
 *
 * @a: the first node.
 *
 * @b: the second node.
 *
 * Return: nothing.
 */

void swap_node(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;

	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}
