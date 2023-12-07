#include "main.h"

/**
 * print_rev - check code
 * @s: input
 * Return: void
 */
void print_rev(char *s)
{
	int leng;
	int i;

	leng = 0;
	while (*s != '\0')
	{
		leng++;
		s++;
	}
	s--;
	for (i = leng; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

