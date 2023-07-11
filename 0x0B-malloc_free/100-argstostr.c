#include "main.h"
/**
 *_strlen - This function return length of string
 *@s: the char to be tested
 *Return: The string length
 */
int _strlen(char *s)
{
	int i, length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
/**
 * argstostr - This is a function that concatenates all the arguments
 * of your program.
 * @ac:argument count
 * @av:argument vector
 * Return:pointer to a character.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int len = 0;
	char *c;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]) + 1;
	}
	c = (char *)malloc((len + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < ac; i++)
	{
		k = 0;
		while (av[i][k])
		{
			c[j] = av[i][k];
			k++;
			j++;
		}
		c[j++] = '\n';
	}
	c[j] = '\0';

	return (c);
}
