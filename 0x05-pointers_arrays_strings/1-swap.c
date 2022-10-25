#include "main.h"

/**
 * swap_int - swap value of integers
 * @a: integer a
 * @b: integer b
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
