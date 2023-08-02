#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of
 * a listint_t linked list.
 * @head:node pointer
 * @index:index of the node
 * Return:the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);

			head = head->next;
			count++;
		}
	}
	return (NULL);
}
