#include "main.h"
#include <ctype.h>

/**
* _isupper - checks for uppercase character.
* @c: character to check for uppercase
*
* Return: 1 if uppercase and 0 if lowercase
*/
int _isupper(int c)
{
	int i = isupper(c);

	if (i)
		return (1);
	else
		return (0);
}
