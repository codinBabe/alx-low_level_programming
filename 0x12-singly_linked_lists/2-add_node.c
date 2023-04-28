#include "lists.h"
/**
 * add_node - This function adds a new node at the beginning of a list_t list.
 * @head: pointer to beginning of list_t
 * @str: string in list_t
 * Return:the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t n = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->str  = strdup(str);

	while (str[n])
	{
		;
		n++;
	}
	new_node->len = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
