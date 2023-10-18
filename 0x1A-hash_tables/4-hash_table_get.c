#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: key
 * Return: Null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t index = key_index((unsigned char *)key, ht->size);
	hash_node_t *tab = ht->array[index];

	while (tab != NULL)
	{
		if (strcmp(tab->key, key) == 0)
			return (tab->value);
		tab = tab->next;
	}
	return (NULL);
}
