#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to conver
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int num_of_bits = sizeof(unsigned long int) * 8;
	int i;
	int printed = 0;

	mask = mask << (num_of_bits - 1);

	for (i = 0; i < num_of_bits; i++)
	{
		if (n & mask)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed)
			_putchar('0');
		mask = mask >> 1;
	}
	if (!printed)
		_putchar ('0');
}
