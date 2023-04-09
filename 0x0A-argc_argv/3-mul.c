#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Zero on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
