#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: pointer to head of list
 * @idx:the index of the list where the new node should be added.
 * Index starts at 0
 * @n:value of node to be added.
 * Return:address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}
	while (i < (idx - 1))
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = (temp)->next;
		i++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
