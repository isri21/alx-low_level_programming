#include <stdio.h>

/**
* main - Entry point
* Description: Prints all lowercase alphabets except 'q' and 'e'
*
* Return: 0;
*/

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x == 'e' || x == 'q')
		{
			x++;
			continue;
		}
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
