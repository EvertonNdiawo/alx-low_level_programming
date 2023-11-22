#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 *
 * @head: pointer to pointer to the head node of the listint_t list
 * @idx: index of the list at which the new node is to be inserted
 * @n: data element of listint_t node
 *
 * Return: address of new node(success), NULL(failure)
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *current;
	unsigned int i = 0;

	ptr = malloc(sizeof(listint_t));

	if (!head || !ptr)
	{
		return (NULL);
	}

	ptr->n = n;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;

		return (ptr);
	}

	current = *head;

	while (current && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (!current)
	{
		free(ptr);
		return (NULL);
	}

	ptr->next = current->next;
	current->next = ptr;

	return (ptr);
}

