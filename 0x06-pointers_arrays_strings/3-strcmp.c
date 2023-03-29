#include "main.h"
/**
 * _strcmp - This function compare two string
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 0 if s1 == s2, 1 if s1 > s2 and -1 if s2 > s1
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	i = (*s1 == *s2) ? 0 : (*s1 > *s2) ? 15 : -15;
	return (i);
}
