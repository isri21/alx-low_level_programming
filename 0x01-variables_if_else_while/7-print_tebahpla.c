#include <stdio.h>

/**
* main - Entry point
* Description: Prints all lowercase alphabets in reverese order
*
* Return: 0;
*/

int main(void)
{
	int x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');

	return (0);
}
