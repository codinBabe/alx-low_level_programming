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
	int i, j;

	n = n - 1;
	j = 0;

	while (j <= n)
	{
		i = a[j];
		a[j++] = a[n];
		a[n--] = i;
	}

}
