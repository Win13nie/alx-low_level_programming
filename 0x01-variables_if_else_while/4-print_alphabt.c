#include <stdio.h>

/**
 * main - print alphabet in lowercase apart from q and e
 * Return: 0
 */

int main(void)
{
	int x;

	x = 'a';

	while (x <= 'z')
	{
		if ((x == 'q') || (x == 'e'))
		{
			continue;
		}

		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
