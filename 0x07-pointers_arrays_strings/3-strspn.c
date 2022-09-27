#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer containg the substring
 * @accept: what substring prefex to look for
 *
 * Return: the number of bytes in initial segment
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		f = 1; /*flag status*/
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = 0; /*success*/
				break;
			}
			j++;
		}
		if (f == 1)
			break;
		i++;
	}

	return (i);
}
