#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a new node at the end of a
 * dlistint_t list
 * @head:list head
 * @n:number of nodes
 * Return:new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		dlistint_t *temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = newNode;
		newNode->prev = temp;
	}
	return (newNode);
}
