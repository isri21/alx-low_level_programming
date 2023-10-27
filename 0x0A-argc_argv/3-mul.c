#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: Number of arguments passed
* @argv: array of strings that stores the argumetns that are passed
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, mult = 1, n;

	/* check if argument passed are exactly 2  and if thery aren't, print error*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* multiply the arguments supplied */
	for (i = 1; i < argc; i++)
	{
		n  = atoi(argv[i]); /* converting the arguments into integers */
		mult = mult * n;
	}
	printf("%d\n", mult);

	return (0);
}
