#include "main.h"
/**
 * _puts - This function prints a string to stdout
 *@str: the string to be tested
 *
 * Return: zero
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{	_putchar(str[i]);
	}
	_putchar('\n');

}
