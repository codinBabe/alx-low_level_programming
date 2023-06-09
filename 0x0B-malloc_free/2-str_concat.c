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
 * str_concat - This is a function that concatenates two strings.
 * @s1:pointer to a string array
 * @s2:pointer to string array
 * Return:a pointer to a character.
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int total_len;
	char *c;
	int i;
	int j;

	if (s1 != NULL)
		a = _strlen(s1);
	if (s2 != NULL)
		b = _strlen(s2);

	total_len = a + b;
	c = (char *)malloc((total_len + 1) * sizeof(char));

	if (c == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		c[i] = s1[i];
	for (j = 0; j < b; j++)
		c[i + j] = s2[j];

	c[total_len] = '\0';

	return (c);
}
