#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * linked list.
 * @head: head of list
 * @index:index of node
 * Return:NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int i = 0;

	while (current_node != NULL)
	{
		if (i == index)
			return (current_node);
		current_node = current_node->next;
		i++;
	}
	return (NULL);
}
