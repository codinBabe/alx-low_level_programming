#include "main.h"
/**
 * puts2 - This function print every other character
 * @str: character to be tested
 *
 * Return:every other character
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
