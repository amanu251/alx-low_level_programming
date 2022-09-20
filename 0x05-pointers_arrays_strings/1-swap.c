#include "main.h"

/**
 * swap_int - swaps the integer value of given variable
 * @a: value of b to be swaped
 * @b: value of a to be swaped
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
