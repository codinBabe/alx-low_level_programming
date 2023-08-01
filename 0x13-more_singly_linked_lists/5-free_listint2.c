#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list
 * @head:node head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	free(*head);
	*head = 0;
}
