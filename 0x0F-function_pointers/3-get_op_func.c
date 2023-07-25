#include "3-calc.h"
/**
 * _strcmp - This function compare two string
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 0 if s1 == s2, postive number in ascii if s1 > s2,
 * negative number in ascii if s2 > s1.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
		++s1, ++s2;

	return (*s1 - *s2);
}

/**
 * get_op_func - a function that selects the correct function to perform the
 * operation asked by the user.
 * @s: the operator
 * Return:result of called operator on the 2 numbers
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (_strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
