#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - prints the sum of arguments supplied
* @argc: number of arguments
* @argv: argumetns (only integers or else error will be printed"
*
* Return: 0 if success and 1 if non numeric character is entered
*/
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
