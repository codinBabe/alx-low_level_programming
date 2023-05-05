#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to print
 * @index: is the index, starting from 0 of the bit you want to get
 * Return:the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitmask, result;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bitmask = 1 << index;
	result = n & bitmask;

	if (result != 0)
		return (1);
	else
		return (0);
}
