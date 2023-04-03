#include "main.h"
/**
 * _memset - This function copies the char b to the first n char of the string
 * pointed to by the argument s
 * @s:pointer to the block of memory to fill
 * @b:the char to be set
 * @n:the number of bytes to be set to char b
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s++ = b;
	}
	return (s);
}
