#include <stdio.h>
/**
 * main - Entry point
 * this programm prints the alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 0;

	while (c <= 9)
	{
		printf("%d", c);
		c++;
	}
	putchar('\n');
	return (0);
}
