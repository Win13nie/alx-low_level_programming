#include <stdio.h>

/**
 * main - print the alphabet in lower and uppercase
 *
 * Return: 0
 */

int main(void)
{
	int x;
	int X;

	x = 'a';
	X = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	while (X <= 'Z')
	{
		putchar(X);
		X++;
	}
	putchar('\n');

	return (0);
}
