#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number.
 * @n:number to print in binary
 */
void print_binary(unsigned long int n)
{
	int start = 0;
	unsigned long int i;
	unsigned int num_bits = sizeof(unsigned long int) * 8;

	for (i = 0; i < num_bits; i++)
	{
		unsigned long int bit = (n >> (num_bits - 1 - i)) & 1;

		if (bit)
			start = 1;
		if (start)
			_putchar(bit ? '1' : '0');
	}
	if (!start)
		_putchar('0');
}
