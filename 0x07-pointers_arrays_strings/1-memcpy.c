#include "main.h"
/**
 * _memcpy - This function copy char from memory area src to memory area dest
 * @dest: pointer to destination array
 * @src:pointer to data to be copied from
 * @n:This is number bytes to be copied
 *
 * Return: return a pointer destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] =  src[i];
	}
	return (dest);
}
