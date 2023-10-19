#include "main.h"
#include <string.h>

/**
* _strncat - conactenates two strings
* @dest: one of the strings to concatenate
* @src: other string to concatenate
* @n: will use at most n bytes form @src
*
* Return: Concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
