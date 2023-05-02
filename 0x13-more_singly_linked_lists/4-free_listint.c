#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	head = NULL;
}
