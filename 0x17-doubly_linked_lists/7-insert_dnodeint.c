#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that inserts a new node at a given
 * position.
 * @h:list head
 * @idx:index of list to add node
 * @n:number of node
 * Return:address of newNode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *prev = NULL;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	int pos = 0;

	newNode->n = idx;
	while (temp != NULL && pos < n)
	{
		prev = temp;
		temp = temp->next;
		pos++;
	}
	if (prev == NULL)
	{
		newNode->next = *h;
		newNode->prev = NULL;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
	}
	else
	{
		newNode->next = temp;
		newNode->prev = prev;
		if (temp != NULL)
			temp->prev = newNode;
		prev->next = newNode;
	}
	return (newNode);
}
