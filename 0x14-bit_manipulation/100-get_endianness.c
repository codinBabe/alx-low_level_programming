#include "main.h"
/**
 * get_endianness - a function that checks the endianness
 * Return:0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 0x01;
	char *ptr = (char *)&num;

	if (*ptr == 0x01)
		return (1);
	else
		return (0);
}
