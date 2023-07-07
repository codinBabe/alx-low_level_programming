#include "main.h"
/**
 * check_prime - This function check for prime number.
 * @a:num 1
 * @b:num 2
 * Return: zero on success
 */
int check_prime(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check_prime(a + 1, b));
}
/**
 * is_prime_number - This function checks if a number is prime or not.
 * @n: tested integer.
 * Return: 1 if integer is prime and 0 if not.
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else
		return (check_prime(2, n));
}
