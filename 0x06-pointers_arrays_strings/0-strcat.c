#include "main.h"
/**
 * _strcat - This function concatenate 2 strings
 * @dest: the first string
 * @src: the second string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; ++j, ++i)
	{ dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
