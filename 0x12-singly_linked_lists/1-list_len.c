#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list.
 *
 * @h: linked list.
 *
 * Return: number of elements in a linked list(success)
 */

size_t list_len(const list_t *h)
{
	size_t num_nodes;

	num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
