#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print variadic number followed by new line
 * @separator: string
 * @n:variadic variable count
 * Return :void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
for (i = 0; i < n; i++)
{
	printf("%d", va_arg(ap, int));
	if (separator && i < n - 1)
	{
		printf("%s", separator);
	}
}
	printf("\n");
	va_end(ap);
}
