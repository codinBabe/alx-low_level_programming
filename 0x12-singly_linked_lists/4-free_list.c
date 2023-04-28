#include "lists.h"
/**
 * free_list - This is a function that frees a list_t list.
 * @head: beginning of list_t
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	head = NULL;
}
