#include "main.h"
#include <string.h>

/**
* _strcpy - copies a string to another string.
* @src: pointer to the string to copy
* @dest: pointer to a buffer to copy to
*
* Return: the pointer to the buffer pointed by dest.
*/
char *_strcpy(char *dest, char *src)
{
	int i, l;

	l = strlen(src);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[l] = '\0';

	return (dest);
}
