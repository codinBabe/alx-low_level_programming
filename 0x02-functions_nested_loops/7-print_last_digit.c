#include "main.h"
/**
 * print_last_digit - display last digit of number
 *@n:The number to be tested
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
		m = m * -1;
	}
	_putchar(m + 48);
	return (m);
}
