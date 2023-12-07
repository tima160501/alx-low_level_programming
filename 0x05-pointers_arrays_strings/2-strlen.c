#include "main.h"

/**
 * _strlen - check code
 * @s: input
 * Return: int
 */
int _strlen(char *s)
{
	int leng;

	leng = 0;
	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}

