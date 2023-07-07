#include "main.h"

/**
 * _isupper - check for upper case alphabet character
 * @c: character to check
 *
 * Return: if c uppercase 1 is returned else zero is returned
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
