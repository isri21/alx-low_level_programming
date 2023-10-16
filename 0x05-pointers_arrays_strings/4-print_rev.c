#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - prints a string in reverse order.
* @s: pointer to the string which is to be printed
* in reverse order.
*
* Return: void.
*/
void print_rev(char *s)
{
	int h = strlen(s);
	int i;

	for (i = h - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
