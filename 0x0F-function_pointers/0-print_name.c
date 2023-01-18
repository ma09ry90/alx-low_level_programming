#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that print name
 * @name: pointer of char
 * @f: pointer to function returning char
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
	return (0);
}
