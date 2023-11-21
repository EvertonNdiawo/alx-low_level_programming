#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: pointer to a pointer to the head node of a listint_t linked list
 *
 * Return: head node's data(n)
 *
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	n = (*head)->n;

	if ((*head)->next)
	{
		*head = NULL;
	}

	temp = (*head)->next;
	free(*head);
	*head = temp;


	return (n);
}
