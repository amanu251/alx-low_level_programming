#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @s: tstring input
 *
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s +1));
}
