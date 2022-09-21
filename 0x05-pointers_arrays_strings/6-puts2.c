#include "main.h"

/**
 * puts2 - print every other char of a string,
 * starting with the first character, followed by new line 
 * @str: input string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; i <= len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
