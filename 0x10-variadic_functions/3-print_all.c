#include "variadic_functions.h"
/**
 * print_char - This function print character
 * @args:argument
 */
void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}
/**
 *print_int - This function print integer
 *@args:argument
 */
void print_int(va_list args)
{
	int i = va_arg(args, int);

	printf("%d", i);
}
/**
 * print_float - This function print integer
 * @args:argument
 */
void print_float(va_list args)
{
	float f = va_arg(args, double);

	printf("%f", f);
}
/**
 *print_string - This function print integer
 *@args:argument
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_all - This is a function that prints anything.
 * @format:list of types of argument passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *form = "";

	print_s info[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);
	i = 0;
	while (format && *(format + i))
	{
		j = 0;
		while (j < 4 && *(format + i) != *(info[j].s))
		{
			j++;
		}
		if (j < 4)
		{
			printf("%s", form);
			info[j].f_ptr(args);
			form = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
