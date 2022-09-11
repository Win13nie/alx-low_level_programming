#include <stdio.h>

/**
 * main - Entry
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a-z*/
	while (ch <= 'z')

	{
		putchar(ch);
		++ch;
	}

	/*prints A - Z*/
	while (CH <= 'A')

	{
		putchar(CH);
		++CH;
	}
	putchar ('\n');

	return (0);
}
