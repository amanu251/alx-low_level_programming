#include "main.h"

/**
 * factorial - calculate factorial of an integer
 * @n: input integer
 *
 * Return: an integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
