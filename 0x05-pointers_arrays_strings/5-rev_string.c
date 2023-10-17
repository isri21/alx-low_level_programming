#include "main.h"
#include <string.h>

/**
* rev_string - reverses a string.
* @s: string to be reversed.
*
* Return: void
*/
void rev_string(char *s)
{
	int l = strlen(s);
	int i;

	for (i = 0; i < l / 2; i++)
	{
		char h = s[i];

		s[i] = s[l - 1 - i];
		s[l - 1 - i] = h;
	}
}
