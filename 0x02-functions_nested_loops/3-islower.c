#include "main.h"
#include <ctype.h>

/**
* _islower - checks for lowercase character.
* @c: character to check if lowercase
*
* Return: 1 if character is lower case, 0 otherwise.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
