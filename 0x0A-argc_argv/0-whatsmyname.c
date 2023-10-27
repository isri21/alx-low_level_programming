#include <stdio.h>

/**
* main - Entry point, prints it's name followed by a new line.
* @argc: Number of arguments passed
* @argv: array of strings that stores the argumetns that are passed
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
