#include <stdio.h>

/**
 * main -Entry point for char that print alphabet using puchar and
 * loop
 *
 * Return: Always zero (Success)
 */

int main(void)
{
	int x;

	for (x = 97; x <= 122;  x++)
	{
		putchar(x);

	}

	putchar('\n');
	return (0);
}
