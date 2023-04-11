#include "main.h"
/**
 * _strlen - This function return length of string
 * @s: the char to be tested
 *
 * Return: The string length
 */
int _strlen(char *s)
{
	int i, length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
/**
 *_strcpy - This function copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: character 1
 * @src: character 2
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * _strdup - This function returns a pointer to a newly allocated space
 *  in memory, which contains a copy of the string given as a parameter.
 *  @str:the string to be copied
 *  Return:pointer to the duplicated string on success, NULL on error.
 */
char *_strdup(char *str)
{
	unsigned int i = _strlen(str);
	char *a = (char *) malloc(i * sizeof(*a) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	_strcpy(a, str);
	return (a);

}
