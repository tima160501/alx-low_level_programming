#include <stdio.h>
/**
 * main - Entry point
 * this programm prints the alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	char c;

	d = 0;
	c = 'a';

	while (d < 10)
	{
		putchar(d + '0');
		d++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
