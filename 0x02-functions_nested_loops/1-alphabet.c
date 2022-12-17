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

char print_alphabet(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
