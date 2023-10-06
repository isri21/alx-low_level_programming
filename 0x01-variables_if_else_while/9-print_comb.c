#include <stdio.h>

/**
* main - Entry point
* Description: Prints all possible combinations of single digits
* separated by commas and a space except the last single digit
*
* Return: 0;
*/

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i == 57)
		{
			i++;
			continue;
		}
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
