#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - entry point
 * @width: int
 * @height: int
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int m, s;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (m = 0 ; m < height ; m++)
	{
		ptr[m] = (int *)malloc(sizeof(int) * width);
		if (ptr[m] == NULL)
		{
			for (m-- ; m >= 0 ; m--)
				free(ptr[m]);
			free(ptr);
			return (NULL);
		}
		for (s = 0; s < width ; s++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
