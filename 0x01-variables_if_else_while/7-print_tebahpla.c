#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point, char that print reverse alphabet
 *
 * Return: Always zero (Success)
 */

int main(void)
{
	char i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
