#include "main.h"
/**
 * _abs - check the code
 * @n : the character to check
 * Return: 1  for letters and 0 for other
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
