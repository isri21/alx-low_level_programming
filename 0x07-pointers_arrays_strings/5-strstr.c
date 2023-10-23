#include "main.h"
#include <string.h>

/**
* _strstr - locates a substring
* @haystack: string to examine
* @needle: string to locate
*
* Return: returns address of the first word that matches needle in haystack
*/
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
