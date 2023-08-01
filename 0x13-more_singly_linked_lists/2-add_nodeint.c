#include "lists.h"
/**
 * add_nodeint - a function that adds a new node at the beginning of
 * a listint_t list.
 * @head:head node
 * @n:node length
 * Return:address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *str;

	while (head != NULL)
	{
		str = malloc(sizeof(listint_t));
		if (str == NULL)
			return (NULL);
		str->n = n;
		str->next = *head;
		*head = str;
		return (str);
	}
	return (NULL);
}
