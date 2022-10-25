#include <unistd.h>

/**
 * _putchar - writes the character c o stdout
 * @c: The character to print
 *
 * Return: on success 1
 * on error, -1 is returned, and error is set separately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
