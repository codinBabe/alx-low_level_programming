#include <stdio.h>

/**
 * main - Entry point declare variable that display alphabet in cap case
 * and small case
 *
 * Return: Always zero (Success)
 */
int main(void)

{
	int x;
	int y;

	for (x = 97; x <= 122; x++)
	{
		putchar(x);
	}
	for (y = 65; y <= 90; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
