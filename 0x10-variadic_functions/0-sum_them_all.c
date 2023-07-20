#include "variadic_functions.h"
/**
 * sum_them_all - This is a function that returns the sum of all its
 * parameters.
 * @n:the first entry point number
 * Return: All sum of numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, nums, result;

	if (n == 0)
		return (0);

	va_start(args, n);
	result = 0;
	for (i = 0; i < n; i++)
	{
		nums = va_arg(args, int);
		result = result + nums;
	}
	va_end(args);
	return (result);
}
