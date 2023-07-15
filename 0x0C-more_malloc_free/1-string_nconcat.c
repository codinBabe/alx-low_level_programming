#include "main.h"
/**
 *_strlen - This function return length of string
 *@s: the char to be tested
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
 *string_nconcat - This function that concatenates two strings.
 *@s1:source string
 *@s2:dest string
 *@n:string length
 *Return:pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = _strlen(s1);
	b = _strlen(s2);

	if (n >= b)
		n = b;

	ptr = malloc(sizeof(char) * (a + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
