#include "main.h"
/**
 * _pow_recursion - This function print x raise to power y
 * @x: the base number
 * @y: the raised number
 *
 * Return: the result of x raised to power y, if y less than 0, -1 is returned
 * if y is 0, 1 is returned
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
