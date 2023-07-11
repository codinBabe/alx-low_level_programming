#include "main.h"
/**
 * create_array - This is aa function that creates an array of chars,
 *  and initializes it with a specific char.
 *  @size:size of the array
 *  @c: char to initialize array with.
 *  Return:a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	i = 0;

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
