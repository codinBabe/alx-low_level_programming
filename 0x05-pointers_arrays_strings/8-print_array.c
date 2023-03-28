#include "main.h"
#include <stdio.h>
/**
 * print_array - This function print n elements of an array of an integer
 * @a: first integer to test
 * @n: second integer to test
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
