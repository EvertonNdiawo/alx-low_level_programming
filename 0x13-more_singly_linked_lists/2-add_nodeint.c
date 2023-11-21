#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t list.
 *
 * @head: pointer to pointer to head node of the list
 * @n: integer data element of a node of listint_t list
 *
 * Return: address of new element(success), NULL(failure)
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next =  *head;

	*head = ptr;

	return (ptr);
}
