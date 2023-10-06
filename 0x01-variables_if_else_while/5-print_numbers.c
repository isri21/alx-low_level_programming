#include <stdio.h>

/**
* main - Entry point
* Description: Prints all single digit numbers
*
* Return: 0;
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
