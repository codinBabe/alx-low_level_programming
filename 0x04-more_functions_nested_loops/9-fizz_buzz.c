#include <stdio.h>
/**
 * main - This program print numbers from 1-100
 * but for mutiple of 3 echo fizz and multiple of 5 echo buzz
 *
 * Return: Always Success
 */
int main(void)
{
	int a;

	a = 1;

	while (a <= 100)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
	if (a != 100)
	{
		printf(" ");
	}
	a++;
	}
	printf("\n");
	return (0);
}
