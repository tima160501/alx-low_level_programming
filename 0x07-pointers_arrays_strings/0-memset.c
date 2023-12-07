#include "main.h"

/**
 * _memset - check code
 * @s: input
 * @b: input
 * @n: input
 * Return: char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

