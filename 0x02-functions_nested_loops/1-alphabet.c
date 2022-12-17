#include <stdio.h>
#include "main.h"

/**
* main - main function
* Return: zero
*/

int main(void)
{
	print_alphabet();
	return (0);
}

/**
* print_alphabet - prints the albhabet
* Return: void
*/

void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
