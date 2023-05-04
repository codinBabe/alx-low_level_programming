#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to head of list
 * @index:index of the node that should be deleted.
 * Return:1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *node_to_delete;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (i < (index - 1))
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	node_to_delete = temp->next;
	if (node_to_delete == NULL)
		return (-1);
	temp->next = node_to_delete->next;
	free(node_to_delete);
	return (1);
}
