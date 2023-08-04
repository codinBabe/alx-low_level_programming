#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n:number 1 to compare
 * @m:number 2 to compare
 * Return:count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, count = 0;

	result = n ^ m;
	while (result != 0)
	{
		count = count + 1;
		result = result & (result - 1);
	}
	return (count);
}
