#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of listint_t list
 *
 * @h: head node of list_t list
 *
 * Return: number of nodes in the list
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		counter++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (counter);
}
