#include "main.h"
#include <ctype.h>

/**
* _isalpha - checks for lowercase character or uppercase letter.
* @c: character to check if letter
*
* Return: 1 if character is a letter, 0 otherwise.
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
