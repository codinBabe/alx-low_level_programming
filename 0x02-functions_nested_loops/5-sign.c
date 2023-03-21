#include "main.h"

/**
 * print_sign - Display sign of a number
 *@n: number to display
 * Return: If positive plus is returned
 * if negative minus is returned
 * if zero 0 is returned
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
