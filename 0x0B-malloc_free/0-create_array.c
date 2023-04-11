#include "main.h"
/**
 * create_array - This function creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: char to set value of array to
 * Return: on success pointer to array, on error NUll.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a = (char *) malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (0);
	}

	while (i < size)
	{
		a[i] = c;
		i++;
	}
	a[i] = '\0';
	return (a);
}
