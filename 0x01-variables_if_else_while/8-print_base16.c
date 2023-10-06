#include <stdio.h>

/**
* main - Entry point
* Description: Prints all the numbers of base 16 in lowercase
*
* Return: 0;
*/

int main(void)
{
	int x = 48;
	int y = 'a';

	while (x <= 57)
	{
		putchar(x);
		x++;
	}
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');

	return (0);
}
