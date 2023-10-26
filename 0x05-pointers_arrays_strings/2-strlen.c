#include "main.h"
#include <string.h>

/**
* _strlen - returns the length of a string.
* @s: pointer to the string whose length is to be returned.
*
* Return: void
*/
int _strlen(char *s)
{
	int i, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c += 1;
	}
	return (c);
}
