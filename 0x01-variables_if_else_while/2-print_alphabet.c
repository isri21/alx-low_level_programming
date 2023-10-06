#include <stdio.h>

/**
* main - Entry point
* Description: Prints all lowercase alphabets
*
* Return: 0;
*/

int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
