#include "main.h"
int get_endianness(void)
{
	int num = 0x01;
	char *ptr = (char*)&num;

	if (*ptr == 0x01)
		return (1);
	else
		return (0);
}
