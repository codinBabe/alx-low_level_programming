#include "main.h"
/**
 * _strlen_recursion- This function return length of string.
 * @s:string pointer.
 * Return:string length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + (_strlen_recursion(s + 1)));
	}
}
