#include "main.h"

/**
 * _puts_recursion - function that prints a string
 *
 * @s: address where the string will be stored
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	s++;
	_puts_recursion(s);
}
