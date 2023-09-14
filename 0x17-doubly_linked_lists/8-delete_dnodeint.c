#include "lists.h"
/**
 * delete_dnodeint_at_index -  a function that deletes the node at index
 * index of a dlistint_t linked list.
 * @head:list head pointer
 * @index:index of th node to be deleted.
 * Return: 1 on success. -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int pos = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL && pos < index)
	{
		temp = temp->next;
		pos++;
	}
	if (temp == NULL)
		return (-1);
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	free(temp);
	return (1);
}
