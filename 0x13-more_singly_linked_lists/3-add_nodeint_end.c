#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the end of a listint_t
 * list.
 * @head:node head
 * @n:num to add to node
 * Return:address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *str, *current;

	if (head)
	{
		str = malloc(sizeof(listint_t));
		if (str == NULL)
			return (NULL);
		str->n = n;
		str->next = NULL;

		if (*head == NULL)
		{
			*head = str;
			return (*head);
		}
		else
		{
			current = *head;
			while (current->next)
				current = current->next;
			current->next = str;
			return (current);
		}
	}
	return (NULL);
}
