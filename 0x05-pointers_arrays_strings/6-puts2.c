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
		if (i % 2 == 0)
		_putchar(str[i]);
	}

	_putchar('\n');
}
