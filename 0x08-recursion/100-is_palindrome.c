#include "main.h"
/**
 * is_palindrome - this function check if a string is panlindrome
 * @s: string to be tested
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int get_length(char *s);
	int pal_check(char *s, int a);
	int length;

	length = get_length(s) - 1;

	return (pal_check(s, --length));
}
/**
 * get_length - this function get length of string
 * @s: string to be tested
 *
 * Return: length of string
 */
int get_length(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
		return (1 + get_length(++s));
}
/**
 * pal_check - This function check for palindrome
 * @s: the string to be tested
 * @a: length of string
 *
 * Return: 1 if palindrome, 0 if not
 */
int pal_check(char *s, int a)
{
	if (*s == *(s + a))
	{
		if (a < 0)

			return (1);
		else
			return (pal_check(++s, a - 2));
	}
	else
		return (0);
}
