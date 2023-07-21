#include "variadic_functions.h"
/**
 * print_numbers - This is a function that prints numbers,
 * followed by a new line.
 * @separator:string to be printed between numbers
 * @n:number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, nums;

	va_start(args, n);

	if (separator == NULL)
		return;
	nums = 0;
	for (i = 0; i < n; i++)
	{
		nums = va_arg(args, unsigned int);
		printf("%d", nums);

		if (i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
