#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: print alphabet in lower
 *
 * Return: always 0 (success)
 */
int main(void)
{
	for (int x = 'a'; x <= 'z'; x++)
	{
		int lower_x = tolower(x);

		putchar(lower_x);
	}
	putchar('\n');

	return (0);
}
