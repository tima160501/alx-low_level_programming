#include "main.h"
/**
 * _isalpha - check the code
 * @c : the character to check
 * Return: 1  for letters and 0 for other
 */

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
		return (0);
}
