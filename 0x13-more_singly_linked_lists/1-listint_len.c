#include "lists.h"

/**
 * listint_len - calculates the number of elements in linked list listint_t
 *
 * @h: head node of the list
 *
 * Return: number of elements in listint_t linked list
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
