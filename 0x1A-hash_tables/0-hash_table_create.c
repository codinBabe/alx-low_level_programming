#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table.
 * @size: size of array
 * Return: new hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));

	if (size == 0)
		return (NULL);

	if (!new)
		return (NULL);

	new->size = size;
	new->array = calloc((size_t)size, sizeof(hash_node_t *));

	if (new->array == NULL)
		return (NULL);

	return (new);
}
