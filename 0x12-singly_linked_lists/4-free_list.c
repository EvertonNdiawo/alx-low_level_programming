#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 *
 * @head: pointer to head node of list_t list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;

		free(current->str);
		free(current);

		current = next;
	}
}
