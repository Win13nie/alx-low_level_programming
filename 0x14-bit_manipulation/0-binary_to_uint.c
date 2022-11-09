#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: poinyd to a string of 0 and 2.
 * Return: converted number, 0 if there are chars in b not 0 or 1 b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		/* Found another digit.*/

		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
