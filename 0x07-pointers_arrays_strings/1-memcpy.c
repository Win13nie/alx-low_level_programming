#include "main.h"

/**
 * _memcpy - function that copies memory area from src to dest
 *
 * @dest: where we will copy to
 * @src: what to copy
 * @n: n bytes of @src
 *
 * Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
