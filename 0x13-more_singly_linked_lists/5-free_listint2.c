#include "lists.h"
/**
 * free_listint2 -function that frees a listint_t list.
 * @head: pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head == NULL)
		return;

	while (*head)
	{
		next_node = *head;
		*head = (*head)->next;
		free(next_node);
	}
	head = NULL;
}
