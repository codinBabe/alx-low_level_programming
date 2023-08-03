#include "lists.h"
/**
 * reallocate - reallocate memory for an array of
 * pointer to nodes in a listint_t list
 * @l:previous list to append
 * @s:size of new list
 * @n:new node to add to list
 * Return:new list
 */
const listint_t **reallocate(const listint_t **l, size_t s, const listint_t *n)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(sizeof(listint_t) * s);
	if (newlist == NULL)
	{
		free(l);
		exit(98);
	}
	for (i = 0; i < s - 1; i++)
		newlist[i] = l[i];
	newlist[i] = n;
	free(l);
	return (newlist);
}

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head:node head
 * Return:number of node in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, count = 0;
	const listint_t **l = NULL;

	while (head != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (head == l[i])
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free(l);
				return (count);
			}
		}
		count++;
		l = reallocate(l, count, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(l);
	return (count);
}
