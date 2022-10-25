#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print the strings to stdout
 * @separator: comma separator
 * @n: number of argument
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	char *str
	str = va_arg(args, char *);

	if (str = NULL)
		printf("(nil)\n");
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char *));
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
	}
	printf("\n");
}
