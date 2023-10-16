#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts2 - prints even elemetns of a string.
* @str: pointer to the string to be manipulated.
*
* Return: void
*/
void puts2(char *str)
{
	int i;
	int l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
		else
			continue;
	}
	putchar('\n');
}
