#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: size of chars
 * @c: input character
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char arr[size];
	unsigned int i;
	
	arr[0] = c;
	char *arr = (char *)malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0;i < size; i++)
		return (arr + i);

}
