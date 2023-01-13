#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integer
 * @min: minimum
 * @max: maximum
 * Return: Array
 */
int *array_range(int min, int max)
{
	int *m, s = 0, t = min;

	if (min > max)
		return (0);
	m = malloc((max - min + 1) * sizeof(int));
	if (!m)
		return (0);

	while (s <= max - min)
		m[s++] = t++;
	return (m);
}
