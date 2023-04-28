#include "lists.h"
/**
 * list_len - This function print number of element in a linked list
 * @h: pointer to head
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
