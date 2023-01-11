#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * creat_array - entry point
 * @size: unsigned int m.
 * @c: char.
 *
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int m;
	s = malloc(sizeof(c) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < size; m++)
	{
		*(s + m) = c;
	}
	return (s);
}
