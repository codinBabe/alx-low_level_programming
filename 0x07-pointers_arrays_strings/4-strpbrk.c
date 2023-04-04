#include "main.h"
/**
 * _strpbrk - This function searches a string for any of a set of bytes
 * @s:the string to be scanned
 * @accept:string containing char to match
 *
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *i, *j;

	for (i = s; *i != '\0'; i++)
	{
		for (j = accept; *j != '\0'; j++)
		{
			if (*i == *j)
			{
				return (i);
			}
		}
	}
	return (NULL);
}
