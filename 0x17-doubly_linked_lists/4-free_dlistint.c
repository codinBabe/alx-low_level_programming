#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head:list head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *nextNode;

	while (temp != NULL)
	{
		nextNode = temp->next;
		free(temp);
		temp = nextNode;
	}
}
