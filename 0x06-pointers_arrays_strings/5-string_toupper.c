#include "main.h"
#include <string.h>
#include <ctype.h>
/**
* string_toupper - converts all lowercase letters of a string to uppercase
* @s: string to convert to uppercase
*
* Return: converted string
*/
char *string_toupper(char *s)
{
	int i, l = strlen(s);

	for (i = 0; i < l; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = toupper(s[i]);
	}
	return (s);
}
