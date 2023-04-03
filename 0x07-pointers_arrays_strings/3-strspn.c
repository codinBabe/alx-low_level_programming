#include "main.h"
char*_strchr(char *s, char c);

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

/**
 * _strchr - This function locate char in a string
 * @s:the string to be scan
 * @c: the char to be located in s
 *
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
        while (*s)
        {
                if (*s != c)
                        s++;
                else
                        return (s);
        }
                if (c == '\0')
                {
                        return (s);
                }
        return (NULL);
}
