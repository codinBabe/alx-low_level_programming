#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum of all the data (n) of a
 * dlistint_t linked list.
 * @head:list head
 * Return:sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
