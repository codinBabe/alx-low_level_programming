#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the nth node of a
 * dlistint_t linked list.
 * @head:list head
 * @index:index of the node starting from 0
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int pos = 0;

	while (temp != NULL)
	{
		if (pos == index)
			return (temp);
		temp = temp->next;
		pos++;
	}
	return (NULL);
}
