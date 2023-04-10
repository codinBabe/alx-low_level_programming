#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program prints the minimum numberof coins to make change
 * for an amount
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int i, cents, total_coins = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		int num = cents / coins[i];

		total_coins += num;
		cents = cents - num * coins[i];
	}
	printf("%d\n", total_coins);
	return (0);
}

