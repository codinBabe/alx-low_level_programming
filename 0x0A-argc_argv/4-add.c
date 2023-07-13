#include "main.h"
/**
 * main - This program adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: zero on success
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (isdigit(argv[i][j]))
				{
					;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
