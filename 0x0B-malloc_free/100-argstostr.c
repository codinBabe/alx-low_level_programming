 #include "main.h"
/**
 * _strlen - This function return length of string
 * @s: the char to be tested
 *
 * Return: The string length
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
 *_strcpy - This function copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: character 1
 * @src: character 2
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * argstostr - This function concatenate all arguments
 * @ac:argument count
 * @av:pointer to argument variable
 * Return:on Success pointer to concatenated string, on error NULL.
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int i, k, len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]) + 1;
	}
	a = (char *) malloc(sizeof(char) * len);
	if (a == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		_strcpy(a + k, av[i]);
		k += _strlen(av[i]);
		a[k++] = '\n';
	}
	a[k] = '\0';
	return (a);
}
