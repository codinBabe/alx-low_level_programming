#include "main.h"

/**
 * print_triangle - print triangle to the terminal
 * @size: This is the size of triangle
 * use # to print triangle
 * if size is 0 or less than 1 print new line
 * use only putchar to print
 */
void print_triangle(int size)
{
	int a, b, c;

	a = 0;
	b = size - 1;
	while (a < size)
	{
		b = size - 1 - a;
		c = a + 1;
		while (b > 0)
		{	_putchar(' ');
			b--;
		}
		while (c > 0)
		{
			_putchar('#');
			c--;
		}
		_putchar('\n');
		a++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
