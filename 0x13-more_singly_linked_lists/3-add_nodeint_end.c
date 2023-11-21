#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: pointer to pointer to the head node of the listint_t list
 * @n: integer data member of listint_t node struct
 *
 * Return: address of new element(success), NULL(failure)
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *current;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;

		return (ptr);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = ptr;

	return (ptr);
}
