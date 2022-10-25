#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = '\0';

	while ('\0' != s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
