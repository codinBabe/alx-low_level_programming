#include "main.h"
/**
 * swap_int - This function swap the value of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: zero
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
