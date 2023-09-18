#include "main.h"

/**
 * _isdigit - check for a digit through 0 to 9
 * @c: variable to test
 *
 * Return: if c is digit return 1 else return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
