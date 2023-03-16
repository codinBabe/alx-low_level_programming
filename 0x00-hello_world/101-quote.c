#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 1 (Error)
 */
int main(void)
{
	char quo[] = "and that piece pf art is useful\" - Dora Korpor, 2015-10-19\n";

	write(1, quo, 59);

	return (1);
}
