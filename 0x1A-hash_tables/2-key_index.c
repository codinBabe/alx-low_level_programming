#include "hash_tables.h"
/**
 * key_index - a function that gives you the index of a key.
 * @key:key
 * @size: size of array
 * Return:index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	size_t num, index;

	num = hash_djb2(key);
	index = num % size;
	return (index);
}
