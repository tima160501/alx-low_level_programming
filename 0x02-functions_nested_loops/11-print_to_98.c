#include <stdio.h>

/**
 * print_to_98 - this is the function
 * @n: is the argument
 * Return: always 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
				printf("%d, ", n);
		}
	} else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
				printf("%d, ", n);
		}
	}
}
