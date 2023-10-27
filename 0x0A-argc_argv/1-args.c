#include <stdio.h>

/**
* main - Entry point, prints the number of arguments passed to it.
* @argc: Number of arguments passed
* @argv: array of strings that stores the argumetns that are passed
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
