#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all it's parameters
 * @n: number of arguments
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	float sum = 0;
if (n == 0)
{
	return (0);
}
va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
va_end(ap);
return (sum);

}
