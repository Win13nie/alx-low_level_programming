#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: where memory is to be copied from
 * @dest: where memory is to be copied to
 * @n: maximun amount of bytes to be uses
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i > 0; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
