#include "main.h"
/**
 * _strstr - This function locates a substring
 * @haystack:the string to be scanned
 * @needle: the string to be search within haystack
 *
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *i, *j, *k;

	if (!*haystack)
	{
		return (needle);
	}
	for (i = haystack; *i != '\0'; i++)
	{
		if (*i == *needle)
		{
			j = i;
			k = needle;
			while (*j != '\0' && *k != '\0' && *j == *k)
			{
				j++;
				k++;
			}
			if (*k == '\0')
			{
				return (i);
			}
		}
	}
	return (NULL);
}
