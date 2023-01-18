#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that print name
 * @name: name to print
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		return;
	f(name);
}
