#include "variadic_functions.h"
/**
 * sum_them_all - This program print the sum of all its parameters
 * @n: number of arguments
 * Return: zero on success.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i =0; i < n; i++)
	{
		int arg = va_arg(args, int);
		sum += arg;
	}
	va_end(args);
	return (sum);
}
