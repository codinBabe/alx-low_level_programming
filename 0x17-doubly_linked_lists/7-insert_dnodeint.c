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
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	unsigned int pos = 0;

	if (h == NULL)
		return (NULL);
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = newNode;
		newNode->next = *h;
		*h = newNode;
	}
	while (pos < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		pos++;
	}
	if (temp == NULL)
		return (NULL);
	newNode->next = temp->next;
	newNode->prev = temp;
	if (temp->next == newNode)
		temp->next->prev = newNode;
	temp->next = newNode;
	return (newNode);
}
