#include "lists.h"

/**
 * sum_listint - sums all data(n) of a listint_t linked list
 *
 * @head: pointer to head node of the linked list
 *
 * Return: Sum of data element of the nodes(success), 0(when list is empty)
 *
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	current = head;

	while (current != NULL)
	{
		sum += current->n;

		current = current->next;
	}

	return (sum);
}


