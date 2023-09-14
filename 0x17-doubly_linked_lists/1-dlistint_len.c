#include "lists.h"
/**
 * dlistint_len - a function that returns the number of elements in a linked
 * dlistint_t list
 * @h: head of the list
 * Return:number of elemnts in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
