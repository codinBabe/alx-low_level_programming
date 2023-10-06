#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table.
 * @size: size of array
 * Return: new hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));
	hash_node_t **new_array = malloc(sizeof(hash_node_t) * size);

	if (!new)
		return (NULL);
	if (!new_array)
	{
		free(new);
		return (NULL);
	}
	new->size = size;
	new->array = new_array;

	return (new);
}
