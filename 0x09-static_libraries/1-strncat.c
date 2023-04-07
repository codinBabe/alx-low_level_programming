#include "main.h"
int _strlen(char *s);
/**
 * _strncat - This function concatenate two string using n bytes
 * @dest: destination array
 * @src: the array copied into dest
 * @n: number of element to be copied
 *
 * Return:a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = _strlen(dest);
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a++] = src[b++];
	}
	if (dest == 0 || src == 0)
	{
		return (0);
	}
	dest[a] = '\0';
	return (dest);
}
/**
 * _strlen - This function check length of char
 * @s:char to be tested
 *
 * Return: length of char
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
