#include "lists.h"
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head:node head pointer
 * Return:a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = 0, *b = 0;

	while (*head)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}
	*head = a;
	return (*head);
}
