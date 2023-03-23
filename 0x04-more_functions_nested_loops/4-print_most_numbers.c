#include "main.h"

/**
 * print_most_numbers - Display numbers from 0 through 9 excluding
 * 2 and 4
 *
 * Return: Success
 */
void print_most_numbers(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		if (i == 50)
		{
			i++;
			continue;
		}
		if (i == 52)
		{
			i++;
			continue;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
