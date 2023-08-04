#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n:number to extract bit
 * @index:position of bit
 * Return:the value of the bit at the given index (0 or 1) or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned int result, bit = sizeof(unsigned long int) * 8;

	if (index >= bit)
		return (-1);

	mask = 1UL << index;
	result = (n & mask) ? 1 : 0;
	return (result);
}
