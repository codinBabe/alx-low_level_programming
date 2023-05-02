#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end
 * of a listint_t list.
 * @head: pointer to head
 * @n: interger value
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current_node;

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	current_node = *head;

	while (current_node->next != NULL)
		current_node = current_node->next;

	current_node->next = new_node;
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}
