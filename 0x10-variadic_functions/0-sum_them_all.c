#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums the values of inout integers
 * @n: number of arguments
 *
 * Return: sum of numbers or 0 when n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}
	va_end(args);

	return (sum);
}
