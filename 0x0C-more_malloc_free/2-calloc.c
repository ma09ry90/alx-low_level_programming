#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 *
 * @nmemb: number of elements of array
 * @size: size of each element of array
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *j;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = malloc(nmemb * size);
	if (j == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		j[i] = 0;
	return ((void *) j);
}
