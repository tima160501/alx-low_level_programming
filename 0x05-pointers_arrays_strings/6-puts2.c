#include "main.h"

/**
 * puts2 - check code
 * @str: input
 * Return: void
 */
void puts2(char *str)
{
	int leng = 0;
	int i = 0;
	char *y = str;
	int c;

	while (*y != '\0')
	{
		y++;
		leng++;
	}
	i = leng - 1;
	for (c = 0; c <= i; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}

