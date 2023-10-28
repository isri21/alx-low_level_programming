#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - prints the minimum number of coins to make change
* for an amount of money.
* @argc: number of arguments
* @argv: argument array
*
* Return: 0 if suucess and 1 if more that 1 or less that 1 argument
* supplied
*/
int main(int argc, char *argv[])
{
	int cent;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
	} else
	{
		int i;

		for (i = 0; cent > 0; i++)
		{
			if (cent >= 25)
				cent -= 25;
			else if (cent >= 10)
				cent -= 10;
			else if (cent >= 5)
				cent -= 5;
			else if (cent >= 2)
				cent -= 2;
			else if (cent >= 1)
				cent -= 1;
		}
		printf("%d\n", i);
	}
	return (0);
}
