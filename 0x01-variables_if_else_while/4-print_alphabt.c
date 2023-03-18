#include <stdio.h>

/**
 * main -Entry point of interger that print alphabet in small letter
 *
 * Return: Always zero (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if ((i == 101) || (i == 113))
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}

