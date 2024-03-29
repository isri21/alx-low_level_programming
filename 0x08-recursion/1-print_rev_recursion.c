#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - prints a string in reverse order
* @s: string to be reversed
*
* Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
