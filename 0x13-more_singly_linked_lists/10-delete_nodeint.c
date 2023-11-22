#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index index of a listint_t list
 *
 * @head: pointer to pointer to the head node of listint_t list
 * @index: index of the node to be deleted.
 *
 * Return: 1(success), -1(failure)
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *current;

	if (!*head)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
