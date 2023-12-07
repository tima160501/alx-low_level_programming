#include "main.h"
/**
 * print_sign - check the code
 * @n : the character to check
 * Return: 1  for letters and 0 for other
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
