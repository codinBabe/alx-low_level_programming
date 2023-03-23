#include "main.h"
/**
 * print_square - This function print a square followed by a new line
 * @size: This is the size of the square
 * use # to print square
 * if size is 0 or less print new line
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
