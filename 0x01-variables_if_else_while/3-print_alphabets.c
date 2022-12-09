#include <stdio.h>

/**
 * main - print alphabet lower and upper
 *
 * Return: zero
 */
int main(void)
{
	char ch;
	char C;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
