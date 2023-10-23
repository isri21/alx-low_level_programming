#include "main.h"
#include <string.h>

/**
* _memset - fills memory with a constant byte.
* @s: pointer to the character array
* @b: character to be filled with
* @n: number of bytes to fill with the character.
*
* Return: pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
