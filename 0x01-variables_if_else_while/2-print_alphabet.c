#include <stdio.h>

/**
 * main - print alphabet from a to z in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int x;

	x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
