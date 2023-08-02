#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * index of a listint_t linked list.
 * @head:node head pointer
 * @index:index of node
 * Return:1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *temp;
	listint_t *count = *head;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = count->next;
		free(count);
		return (1);
	}
	temp = *head;
	while (temp)
	{
		if (i == index)
		{
			count = temp->next;
			temp->next = count->next;
			free(count);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
