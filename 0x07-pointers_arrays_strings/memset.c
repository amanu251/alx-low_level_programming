#include "main.h"

/**
 * _memset - fills first n number of memory
 * @s: pointer to memory cell
 * @b: character value to be filled
 * @n: number of size byte to be filled
 *
 * Return: pointer to the memmory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ret = s;
	int i;

	while (i == n) 
	{
		*ret = b;
		i--;	
	}
	return (ret);
}
