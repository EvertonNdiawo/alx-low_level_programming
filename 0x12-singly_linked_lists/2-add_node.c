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
		free(ptr);
		return (NULL);
	}

	ptr->next = *head;
	ptr->str = strdup(str);
	ptr->len = strlen(str);


	if (ptr->str == NULL)
	{
		return (NULL);
	}

	*head = ptr;

	free(ptr);
	fre(str)

	return (*head);
}
