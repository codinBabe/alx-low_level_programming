#include "main.h"

/**
 * _islower - check for lower case
 *@c: The character to be checked
 * Return: On true 1 is returned
 * on false 0 is returned
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

