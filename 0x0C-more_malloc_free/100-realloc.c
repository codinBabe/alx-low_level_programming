#include "main.h"
/**
 * _realloc - This function that reallocates a memory block using
 * malloc and free.
 * @ptr:is a pointer to the memory previously allocated with malloc
 * @old_size:the size, in bytes, of the allocated space for ptr
 * @new_size:the new size, in bytes, of the memory block that
 * you want to reallocate.
 * Return:pointer to the newly reallocated block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *new_block;
	unsigned int i, min_size;

	if (ptr == NULL)
	{
		new_block = malloc(new_size);
		return (new_block);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_block = malloc(new_size);
	if (new_block == NULL)
		return (NULL);

	min_size = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < min_size; i++)
		new_block[i] = ((unsigned char *)ptr)[i];

	free(ptr);
	return (new_block);
}
