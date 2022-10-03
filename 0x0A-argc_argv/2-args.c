#include <stdio.h>

/**
 * main - a pprogram that prints all the argumebts it receives
 * @argc: number if arguments
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
