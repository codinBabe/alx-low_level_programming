#include "main.h"
/**
 * array_range - This function that creates an array of integers.
 * @min:min value of array
 * @max:max value of array
 * Return:a pointer to the newly created array of integers.
 */
int *array_range(int min, int max)
{
	int array_size, *ptr, i;

	if (min > max)
		return (NULL);
	array_size = max - min + 1;
	ptr = malloc(sizeof(int) * array_size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < array_size; i++)
		ptr[i] = min + i;

	return (ptr);
}

