#include "lists.h"
#include <stdio.h>


/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: pointer to the head node of the list
 *
 * Return: number of nodes of the list
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}


	while (h)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;

		counter++;
	}

	return (counter);
}
