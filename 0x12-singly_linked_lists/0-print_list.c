#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 *
 * @h: pointer to the list_t whose elements are to be printed.
 *
 * Return: number of nodes(success), NULL(empty str).
 */

size_t print_list(const list_t *h)
{
	size_t num_elements;

	num_elements = 0;

	while ( h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		num_elements++;
	}

	return (num_elements);

}
