#include "main.h"
#include <string.h>

/**
* _strspn - gets the length of a prefix substring
* @s: string to examine
* @accept: string to check if exist
*
* Return: returns intial segments of s which only consist of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
