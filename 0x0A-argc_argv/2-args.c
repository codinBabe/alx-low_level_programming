#include "main.h"
/**
 * main - This program prints all arguments it receives.
 * @argc:argument count(unused)
 * @argv:argumet vector
 * Return: zero on success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
