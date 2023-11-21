#include "lists.h"
#include <stdio.h>

/**
 * list_len - Counts the number of elements in a linked list.
 *
 * @h: head of the linked list
 *
 * Return: number of items in the list
 */

size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;

		counter++;
	}

	return (counter);
}
