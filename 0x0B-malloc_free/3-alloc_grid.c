#include "main.h"
/**
 * alloc_grid - This function returns a pointer to a 2 dimensional
 * array of integers.
 * @width: array width
 * @height: arry height
 * Return:pointer to a pointer of array a on success, NULL on error.
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = (int **) malloc(height * sizeof(int *));
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = (int *) malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
