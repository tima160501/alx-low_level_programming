#include "main.h"
/**
 * print_last_digit - check the code
 * @n : the character to check
 * Return: 1  for letters and 0 for other
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
