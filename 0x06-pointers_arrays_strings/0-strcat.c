#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates string 2 to string 1
 * @dest: string 1
 * @src: string 2
 *
 * Return: Always dest
 */
char *_strcat(char *dest, char *src)
{

	strcat(dest, src);
	return (dest);
}
