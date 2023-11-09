#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs simple operations.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success,
 * 98 if not 3 arguments
 * 99 if different operator
*/
int main(int argc, char *argv[])
{
	int (*o)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	o = get_op_func(argv[2]);

	if (!o)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", o(atoi(argv[1]), atoi(argv[3])));
	return (0);

}
