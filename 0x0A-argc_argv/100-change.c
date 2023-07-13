#include "main.h"
/**
 * main - This is a program that prints the minimum number of
 * coins to make change for an amount of money
 * @argc:argument count
 * @argv:argument vector
 * Return:zero on success.
 */
int main(int argc, char *argv[])
{
	int i, amount, sum_coins = 0;
	int coins[] = {1, 2, 5, 10, 25};

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 4; i >= 0; i--)
	{
		int num = amount / coins[i];

		sum_coins += num;
		amount = amount - num * coins[i];
	}
	printf("%d\n", sum_coins);
	return (0);
}
