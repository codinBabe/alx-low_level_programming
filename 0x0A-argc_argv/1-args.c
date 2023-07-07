#include "main.h"
/**
 * main - This program prints the number of argument passed into it.
 * @argc:argument count
 * @argv:argument vector(unused)
 * Return: zero on success.
 */
int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
