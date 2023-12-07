#include "main.h"

/**
 * _strlen_recursion - check code
 * @s: input
 * Return: int
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}

