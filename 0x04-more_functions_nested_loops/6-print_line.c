#include "main.h"

/**
 * print_line - This function print _ to the terminal
 * @n: number of time character should be printed
 *
 * Return: Success
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
