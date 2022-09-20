#include "main.h"
#include <string.h>

/**
 * _strlen - return the length of a string
 *@s: string
 *
 * Return: always 0
 */
int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
