#include "main.h"
/**
 *malloc_checked - This function that allocates memory using malloc.
 *@b:number of bytes to allocate
 *Return:pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
