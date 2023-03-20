#include <stdio.h>

/**
 * main - Entry point for declared int of two two digit
 * number should range from 0 to 99
 * you can only use putchar 8 times
 *
 * Return: Always zero (Success)
 */
int main(void)
{
	int  x, y;

	for (x = 48; x < 58; x++)
	{
		for (y = 49; y < 58; y++)
		{

			if (x < y && x != y)
			{
				putchar(x);
				putchar(x);
				putchar(32);
				putchar(x);
				putchar(y);


				if (x < 56 || y < 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
