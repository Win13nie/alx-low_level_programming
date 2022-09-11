#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all the alphabet letters
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a'

	while ('a' >= ch <= 'z')

	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
