#include "main.h"
/**
 * checknum - This function checks if a num is prime or not
 * @x: first num
 * @y: second num
 *
 * Return: if prime return 1 otherwise return 0
 */
int checknum(int x, int y)
{
	if (y < 2 || y % x == 0)
	{
		return (0);
	}
	if (x > y / 2)
	{
		return (1);
	}
	return (checknum(x + 1, y));
}
/**
 * is_prime_number - This function print 1 for prime
 * @n: number to be tested
 *
 * Return: success
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (checknum(2, n));
}
