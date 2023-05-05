#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to string 0 and 1
 * Return:the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			result = (result << 1) + (b[i] - '0');
		else
			return (0);
		i++;
	}
	return (result);
}
