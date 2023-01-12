#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 *
 * @b: the size to allocate
 * Return: pointer to allocated memory or 98 if faild.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;
ptr = malloc(b);
	if (ptr == NULL)
	exit(98);

	return (ptr);
}
