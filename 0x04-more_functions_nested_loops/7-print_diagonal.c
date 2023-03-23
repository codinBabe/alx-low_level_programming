#include "main.h"

/**
 *print_diagonal - print a diagonal line to the terminal
 *@n: number of time line is printed
 *description: only use _putchar to print
 *if n is less or equal zero print new line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
