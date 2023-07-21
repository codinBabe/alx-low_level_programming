#include "variadic_functions.h"
/**
 * print_strings - This is a function that prints strings,
 * followed by a new line.
 * @separator:string to be printed between string
 * @n:number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *c;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(args, char *);
		if (c == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", c);
		}
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
