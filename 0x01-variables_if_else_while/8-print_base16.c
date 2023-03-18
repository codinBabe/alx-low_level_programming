#include <stdio.h>
/**
 * main- Entry point integers that print hexadecimal values or base 16
 *
 * Return: Always zero (Success)
 */
int main(void)
{
	int x, y;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (y = 97; y <= 102; y++)
	{
		putchar(y);
	}

	putchar('\n');
	return (0);
}
