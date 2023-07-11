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
	int a;
	int b;
	int total_len;
	char *c;
	int i;
	int j;

	if (s1 == NULL || s2 == NULL)
	{
		char *s = malloc(1 * sizeof(char));

		s[0] = '\0';

		return (s);
	}
	a = _strlen(s1);
	b = _strlen(s2);
	total_len = (a + b) + 1;
	c = malloc(total_len * sizeof(char));

	for (i = 0; i < a; i++)
		c[i] = s1[i];
	for (j = 0; j < b; j++)
		c[i + j] = s2[j];

	c[i + j] = '\0';
	return (c);
}
