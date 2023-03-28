#include "main.h"
/**
 * print_rev - This function print reverse string
 * @s: the character to be tested
 *
 * Return: reverse string
 */
void print_rev(char *s)
{
	int i, j;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
