#include "main.h"
/**
 * get_endianness - a function that checks the endianness.
 * Return:0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int val = 0x01;
	char *byte_ptr = (char *)&val;

	if (*byte_ptr == 0x01)
		return (1);
	else
		return (0);
}
