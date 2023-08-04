#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n:pointer to set bit to 0
 * @index:position of bit to set to 0
 * Return:1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit = sizeof(unsigned long int) * 8;
	unsigned long int mask;

	if (index >= bit)
		return (-1);

	mask = 1UL << index;
	mask = ~mask;
	*n &= mask;

	return (1);
}
