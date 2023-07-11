#include "main.h"
/**
 *_strlen - This function return length of string
 *@s: the char to be tested
 *
 *Return: The string length
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
 * _strdup - This is a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str:pointer to a string
 * Return:a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int len = _strlen(str);

	if (str == NULL)
		return (NULL);
	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);
	i = 0;

	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';

	return (s);
}
