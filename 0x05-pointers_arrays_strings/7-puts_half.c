#include "main.h"
/**
 * puts_half - This function print the second half of a string
 * @str: string to be tested
 *
 * Return: second half of string
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		i++;
	for (i /= 2; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
