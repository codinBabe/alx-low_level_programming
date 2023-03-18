#include <stdio.h>

/**
 * main -Entry point char that print integers from base 10 to 0
 *
 * Return: Always zero (Sucess)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
	}

	putchar('\n');
	return (0);
}
