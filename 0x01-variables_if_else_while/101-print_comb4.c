#include <stdio.h>

/**
 * main - Entry point, create 3 variable to print each number to make a
 * combination of three digit
 * you can only use putchar to print six times only
 * must be seperated by commas and space.
 *
 * Return: Always zero (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = 48; x < 58; x++)
	{
		for (y = 49; y < 57; y++)
		{
			for (z = 50; z < 56; z++)
			{
				if ((x < y) && (y < z))
				{
					putchar(x);
					putchar(y);
					putchar(z);

					if (((x < 56) && (y < 57)) || (z < 58))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
