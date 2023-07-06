#include "main.h"
/**
 * _puts_recursion - This function print a string followed by a new line.
 * @s:string to be printed
 * return:void
 */
void _puts_recursion(char *s)
{
	write(1, s, 19);
	_putchar('\n');
}
