#include <stdio.h>
#include <math.h>

/**
 * main - This program find the largest prime number of a given value
 *
 * Return: On success the largest prime number is returned
 */
int main(void)
{
	int a;
	long num = 612852475143;

	for (a = (int) sqrt(num); a > 2; a++)
	{
		if (num % a == 0)
		{
			printf("%d\n", a);
			break;
		}
	}
	return (0);
}
