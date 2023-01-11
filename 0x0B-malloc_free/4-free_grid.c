#include "main.h"
#include <stdlib.h>
/**
 * free_grid - entry point
 * @grid: pointer
 * @height: int
 * Return: Always 0
 */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
	free(grid[m]);
	}
	free(grid);
}
