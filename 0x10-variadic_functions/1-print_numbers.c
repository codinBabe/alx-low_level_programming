#include "variadic_functions.h"
/**
 * print_numbers - This function prints numbers, followed by a new line.
 * @separator: string to print between numbers
 * @n: number to print
 * Return: zero on success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, unsigned int));
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(a);
}
