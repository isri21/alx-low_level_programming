#include <stdio.h>

/**
* main - Entry point
* Description: Prints all single digit numbers
* using only the putchar() function
*
* Return: 0;
*/

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
