#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head:node head pointer
 * Return:head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (*head != NULL)
	{
		temp = (*head)->next;
		data = (*head)->n;

		free(*head);
		*head = temp;
	}

	return (data);
}
