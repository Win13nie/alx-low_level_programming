#include "main.h"

/**
 * main - prints alphabet in lowercase followed by new line
 *
 * Return: 0
 */

int main(void)
{
	int i;

	i = 'a';

	while (i >= 'a' && i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
