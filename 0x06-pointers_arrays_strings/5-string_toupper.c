#include "main.h"
/**
 * string_toupper - This function return uppercase letter
 * @s: array to be tested
 *
 * Return: the array in uppercase
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
