#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the endo of a list_t list
 *
 * @head: pointer to pointer to head of the list
 * @str: the string data element of list_t node
 *
 * Return: Address of the new element(success), NULL(failure)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->str = strdup(str);

	if (ptr->str == NULL)
	{
		free(ptr);

		return (NULL);
	}

	ptr->len = strlen(str);
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}

	else
	{
		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = ptr;
	}

	return (ptr);
}
