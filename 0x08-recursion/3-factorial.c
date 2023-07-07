#include "main.h"
/**
 * factorial- This function return factorial of a given number.
 * @n: the number
 * Return: zero on success.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
