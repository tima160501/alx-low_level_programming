#include "main.h"
/**
 * _islower - check the code
 * @c : the character to check
 * Return: 1 for lowercase and 0 for other
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
		return (0);
}
