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
	dlistint_t *prev = NULL;
	unsigned int pos = 0;
	int delete_idx;

	if (*head == NULL)
		return (-1);

	while (temp != NULL && pos < index)
	{
		prev = temp;
		temp = temp->next;
		pos++;
	}
	if (temp == NULL)
		return (-1);
	if (prev == NULL)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = prev;
	}
	delete_idx = temp->n;
	free(temp);
	return (delete_idx);
}
