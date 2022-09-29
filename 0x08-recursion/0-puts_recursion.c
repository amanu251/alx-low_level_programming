#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer char
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
