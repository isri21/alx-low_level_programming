#include <stdio.h>

/**
 * main - This is the main function
 * Return: zero
 */

int main(void)
{
	int i;
	int c;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
