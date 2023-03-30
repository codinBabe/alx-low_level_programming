#include "main.h"
/**
 * _strcmp - This function compare two string
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 0 if s1 == s2, postive number in ascii if s1 > s2,
 * negative number in ascii if s2 > s1.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
		++s1, ++s2;

	return (*s1 - *s2);
}
