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
	char *h = strcpy(dest, src);

	return (h);

}
