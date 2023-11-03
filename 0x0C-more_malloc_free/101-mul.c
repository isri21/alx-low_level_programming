#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers given as arguments
* @argc: number of arguments
* @argv: string array to store the arguments
*
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int i, sum = 1; /* initializes variables*/
	/* if argumetns are note 2 the print error and exit with 98*/
	if (argc  != 3)
	{
		printf("Error\n");
		exit(98);
	}
	/* add the sum in a variable */
	for (i = 1; i < argc; i++)
	{
		sum *= atoll(argv[i]);
	}
	/* print the sum */
	printf("%d\n", sum);

	return (0);
}
