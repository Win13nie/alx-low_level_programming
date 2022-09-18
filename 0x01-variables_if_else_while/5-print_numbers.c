#include <stdio.h>

/**
 * main - print integers of base 10 from 0
 *
 * Return: 0
 */

int main(void)
{
	int num;

	num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
