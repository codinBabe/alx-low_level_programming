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

	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 100; y++)
		{

			if (x < y)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);


				if (x < 98 || y < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
