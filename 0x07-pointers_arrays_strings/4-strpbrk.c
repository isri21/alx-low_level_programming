#include "main.h"
#include <string.h>

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: string to examine
* @accept: bytes to check
*
* Return: returns intial segments of s which only consist of bytes from accept
*/
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
