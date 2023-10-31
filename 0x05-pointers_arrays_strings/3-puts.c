#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _puts - prints a string followed by a new line.
* @str: pointer to the string to be printed.
*
* Return: void.
*/
void _puts(char *str)
{
	int i, l;

	l = strlen(str);

	for (i = 0; i < l; i++)
		putchar(str[i]);
	putchar('\n');
}
