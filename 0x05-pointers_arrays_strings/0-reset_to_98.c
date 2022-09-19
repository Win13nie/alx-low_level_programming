#include "main.h"

/**
 * main - a pointer that updates the value of a variable to 98
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int *p;

	n = 402;
	p = &n;

	printf("value of 'n' : %d\n", n);
	printf("address of 'n' : %d\n", n);
	printf("value of 'p' : %d\n", n);

	*p = 98;

	printf("value of 'n' : %d\n", n);

	return (0);
}
