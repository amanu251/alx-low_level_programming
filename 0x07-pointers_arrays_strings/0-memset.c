#include "main.h"

/**
 * _memset - fills memory with constant bytes
 * @s: points memory area
 * @b: character value to be set
 * @n: numbers of bytes
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *mem = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (mem);	
}
