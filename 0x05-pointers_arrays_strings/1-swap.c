#include "main.h"

/**
 * swap_int - check code
 * @a: input
 * @b: other input
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

