#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	int k = 0;

	for (unsigned int i = (1 << len - 1); i > 0; i = i / 2)
	{
		binary[k++] = (n & i) ? '1' : '0';
	}
	return (binary);
}
