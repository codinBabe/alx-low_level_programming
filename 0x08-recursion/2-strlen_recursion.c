#include "main.h"
/**
 * _strlen_recursion - This function count string
 * @s: string to be counted
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + (_strlen_recursion(s + 1)));
}
