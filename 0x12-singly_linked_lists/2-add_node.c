#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a node at the beginning of a list_t list
 *
 * @head: pointer to the pointer to the head of list_t list
 * @str: a string data item in list_t list node
 *
 * Return: Address of new node(success), NULL (failure)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->next = *head;
	ptr->str = strdup(str);


	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->len = strlen(str);

	*head = ptr;

	return (*head);
}
