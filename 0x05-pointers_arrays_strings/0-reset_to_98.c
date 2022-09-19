#include "main.h"

/**
 * main - a pointer that updates the value of a variable to 98
 * @n - variable to be changes
 *
 * Return: 0
 */
void reset_to_98(int *n)
{
	n = 402;
}

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

	reset_to_98(int *n);

	printf("value of 'n' : %d\n", n);

	return (0);
}
