#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n:first number
 * @m:second number
 * Return:number of bits flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int num_of_bits;


	num_of_bits = n ^ m;
	while (num_of_bits != 0)
	{
		count += num_of_bits & 1;
		num_of_bits >>= 1;
	}
	return (count);
}
