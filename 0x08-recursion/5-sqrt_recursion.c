#include "main.h"
/**
 * checknum - This function checks if an integer is a natural sqaure root
 * @x:The natural square root
 * @y:The result of x multiple
 *
 * Return: the natural root or -1 for unnatural root
 */
int checknum(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	if (x * x > y)
	{
		return (-1);
	}
	return (checknum(x + 1, y));
}
/**
 * _sqrt_recursion - This function print natural square root of a number
 * @n: integer to be tested
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (checknum(1, n));
}
