#include <stdio.h>
/**
 * main - Entry point
 * this programm prints the alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	char d;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	d = 'A';

	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}

	putchar('\n');
	return (0);
}
