#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: O
 */
int main(int argc, char **argv)
{
	int a, i;
	char *b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
	printf("Error\n");
	exit(2);
	}

	b = (char *)&main;
	for (i = 0; i < a; i++)
	{
		printf("%.2hhx", b[i]);
	if (i < a - 1)
		printf(" ");
	}
		printf("\n");

	return (0);
}
