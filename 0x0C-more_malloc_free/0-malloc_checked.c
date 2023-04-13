#include "main.h"
/**
 * malloc_checked - this function allocates memory using malloc
 * @b:number of bytes to allocate
 * Return:pointer allocated to memory on sucess, 98 on Error.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
