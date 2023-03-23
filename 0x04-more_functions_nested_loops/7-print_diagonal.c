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

	for (i = 1; i < n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');

			if (n <= 0)
			{
			_putchar('\n');
			}

		}
		_putchar(92);
		_putchar('\n');
	}

}
