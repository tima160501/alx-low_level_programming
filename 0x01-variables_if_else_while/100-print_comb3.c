#include <stdio.h>
/**
 * main - Entry point
 * this programm prints the alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (b < 10 && a < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
