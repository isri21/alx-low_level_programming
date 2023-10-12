#include "main.h"
#include <ctype.h>

/**
* _isdigit - checks if the character is a digit.
* @c: character to check if digit.
*
* Return: 1 if digit  and 0 if not.
*/
int _isdigit(int c)
{
	int i = isdigit(c);

	if (i)
		return (1);
	else
		return (0);
}
