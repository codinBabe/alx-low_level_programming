#include <stdio.h>
/**
 * main - Entry point of two digit combination
 *
 * Return: Always zero (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 48; x < 58; x++)
	{
		for (y = 49; y < 58; y++)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
					if ((x < 56) || (y < 57))
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
