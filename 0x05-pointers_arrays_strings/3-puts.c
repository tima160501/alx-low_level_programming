#include "main.h"

/**
 * _puts - check code
 * @str: input
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

