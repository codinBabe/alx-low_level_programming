#include "main.h"

/**
 * _strspn - This function gets the length of a prefix substring
 * @s:string to be scanned
 * @accept:string containing char to match
 *
 * Return: number of char in s consisting char from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0' && _strchr(accept, *s) != NULL)
	{
		i++;
		s++;
	}
	return (i);
}
