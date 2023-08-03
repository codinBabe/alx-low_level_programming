#include "lists.h"
/**
 * _realloc - reallocate memory for an array of
 * pointer to nodes in a listint_t list
 * @l:previous list to append
 * @s:size of new list
 * @n:new node to add to list
 * Return:new list
 */
listint_t **_realloc(listint_t **l, size_t s, listint_t *n)
{
	listint_t **newlist;
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
 * free_listint_safe - a function that frees a listint_t list.
 * @h:pointer to head node
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i, count = 0;
	listint_t **l = NULL;
	listint_t *next;

	if (h == NULL || *h == NULL)
		return (count);
	while (*h != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (*h == l[i])
			{
				*h = NULL;
				free(l);
				return (count);
			}
		}
		count++;
		l = _realloc(l, count, *h);
		next = (*h)->next;
		free(*h);
		*h = next;
	}
	free(l);
	return (count);
}
