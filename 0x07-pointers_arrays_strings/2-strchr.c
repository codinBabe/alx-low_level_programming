#include "main.h"
/**
 * _strchr - This function locate char in a string
 * @s:the string to be scan
 * @c: the char to be located in s
 *
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		if (c == '\0')
		{
			return (s);
		}
	}
	return (NULL);
}
