#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints given number to std out
 * @separator: string between two numbers
 * @n: number of argument
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
