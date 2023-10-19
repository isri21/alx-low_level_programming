#include "main.h"
#include <string.h>

/**
* _strncpy - copies a string
* @dest: place to copy to
* @src: place to copy from
* @n: will use at most n bytes form @src
*
* Return: copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
