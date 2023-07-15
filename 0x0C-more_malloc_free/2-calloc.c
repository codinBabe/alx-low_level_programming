#include "main.h"
/**
 * _calloc - This function that allocates memory for an array, using malloc.
 * @nmemb:number of element in array
 * @size:size of each element in bytes.
 * Return:a generic pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_mem, i;
	unsigned char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_mem = nmemb * size;
	ptr = malloc(sizeof(unsigned char) * total_mem);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_mem; i++)
		ptr[i] = 0;
	return (ptr);
}
