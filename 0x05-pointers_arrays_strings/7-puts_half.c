#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* puts_half - prints second half of a string.
* @str: string to print from.
*
* Return: void
*/
void puts_half(char *str)
{
	int l = strlen(str);
	int j, i;

	if (l % 2 == 0)
		j = l / 2;
	else
		j = (l / 2) + 1;

	for (i = j; i < l; i++)
		putchar(str[i]);
	putchar('\n');
}


