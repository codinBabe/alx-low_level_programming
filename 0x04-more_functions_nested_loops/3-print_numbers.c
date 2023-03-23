#include "main.h"

/**
 * print_numbers - Display number 0 through 9
 *
 * Return: Success
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
