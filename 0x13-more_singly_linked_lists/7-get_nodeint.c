#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint_t list
 *
 * @head: pointer to head node of listint_t list
 * @index: index of the nth node to find, with indexing starting at 0
 *
 * Return: the nth node of the list(success), NULL ( if node doesnt exist)
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
