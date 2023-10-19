#include "main.h"
#include <string.h>

/**
* _strcmp - compaters two strings
* @dest: one of the strings to be compared
* @src: other string to compare
*
* Return: returns an integer less than, equal to, or greater
* than zero if @dest is found, respectively,
* to be less than, to match, or be greater than @src.
*/
int _strcmp(char *dest, char *src)
{
	return (strcmp(dest, src));
}
