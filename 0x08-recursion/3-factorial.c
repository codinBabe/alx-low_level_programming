#include "main.h"
/**
*factorial - This function print factorial of a given number
*@n: the number to be tested
*Return: The factorial on n, 1 if n is zero and
*-1 if n is less than 1
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

