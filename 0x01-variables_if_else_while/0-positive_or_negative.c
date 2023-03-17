#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of generating random number,
 * print if/else of positve, zero and negative numbers.
 *
 * Return: Always zero (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
