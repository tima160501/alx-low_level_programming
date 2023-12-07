#include <stdio.h>
/**
 * main - Entry point
 * this programm prints the alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
