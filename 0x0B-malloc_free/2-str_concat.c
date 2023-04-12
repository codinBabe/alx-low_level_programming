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
 * str_concat - This function combine two string together
 * @s1: first string
 * @s2: second string
 * Return:concatenated string on success and NULL error.
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = _strlen(s1) + _strlen(s2);
	a = (char *) malloc((sizeof(char) * len) + 1);

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		a[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		a[i + j] = s2[j];

	a[i + j] = '\0';
	return (a);
}
