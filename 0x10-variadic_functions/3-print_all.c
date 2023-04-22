#include "variadic_functions.h"
/**
 * print_all - This function print anything
 * @format: list of type of argument passed
 */
void print_all(const char * const format, ...)
{
	va_list a;
	unsigned int i;
	char *s, *separator;

	va_start(a, format);
	separator = "";
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(a, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(a, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(a, double));
				break;
			case 's':
				s = va_arg(a, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(a);
}
