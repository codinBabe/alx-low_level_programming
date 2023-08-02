#include "lists.h"
/**
 * insert_nodeint_at_index -  a function that inserts a new node at
 * a given position.
 * @head:node head pointer
 * @idx:index of the list
 * @n:number
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *temp;
	unsigned int x = 1;

	if (head)
	{
		current = malloc(sizeof(listint_t));
		if (current == NULL)
			return (NULL);
		current->n = n;
		if (idx > 0)
		{
			temp = *head;
			while (temp)
			{
				if (x == idx)
				{
					current->next = temp->next;
					temp->next = current;
					return (current);
				}
				temp = temp->next;
				x++;
			}
			if (idx > x)
				return (NULL);
		}
		else
		{
			current->next = *head;
			*head = current;
		}
		return (current);
	}
	return (NULL);
}
