#include "main.h"
/**
 * reverse_array - This function reverse an array
 * @a:the array
 * @n: the number of element in the array
 *
 * Return: the reverse array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(a[i]);
	}
}
