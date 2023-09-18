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
