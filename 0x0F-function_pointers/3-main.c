#include "3-calc.h"
#include "function_pointers.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv:argument vector
 * Return:result of operation called on 2 numbers
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(num1, num2));
	return (0);
}
