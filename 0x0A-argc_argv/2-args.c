#include <stdio.h>

/**
* main - prints all the arguments it recieves
* @argc: Number of arguments passed
* @argv: array of strings that stores the argumetns that are passed
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
