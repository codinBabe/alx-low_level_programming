#include "main.h"
/**
 *sqrt_ roots - This function check for square roots
 * @a: number 1
 * @b: number 2
 * Return: zero on success.
 */
int sqrt_roots(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	else
		return (sqrt_roots(a + 1, b));
}
/**
 * _sqrt_recursion - This function return the natural square root of a number.
 * @n: the number
 * Return : zero on success
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
		return (sqrt_roots(1, n));
}
