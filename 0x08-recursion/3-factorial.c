#include "main.h"

/**
 * factorial - check code
 * @n: input
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}

