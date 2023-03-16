#include <stdio.h>

/**
 * main - Print size of various types on the computer
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %c byte(s)\n", sizeof(charType));

	printf("Size of a int: %d byte(s)\n", sizeof(intType));

	printf("Size of a long int: %ld byte(s)\n", sizeof(longintType));

	printf("Size of a long long int: %lld byte(s)\n", sizeof(longlongType));

	printf("Size of a float: %f byte(s)\n", sizeof(floatType));

	return (0);
}
