#include <stdio.h>

/**
 * main - print alphabet in reverse
 * Return: 0
 */

int main(void)
{
	int x;

	x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');

	return (0);
}
