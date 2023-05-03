#include "lists.h"
/**
 * pop_listint -function that deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to head of list
 * Return:zero if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	size_t data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
