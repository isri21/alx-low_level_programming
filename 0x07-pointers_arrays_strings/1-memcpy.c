#include "main.h"
#include <string.h>

/**
* _memcpy - copies a memory area
* @dest: pointer to memory to paste
* @src: pointer to memory to copy
* @n: number of bytes to copy
*
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
