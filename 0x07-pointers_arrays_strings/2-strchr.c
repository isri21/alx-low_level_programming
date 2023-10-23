#include "main.h"
#include <string.h>

/**
* _strchr - finds a character in a string
* @s: string to search the charachter in
* @c: the character to search
*
* Return: pointer charachter in the string, or NULL if the charachter
* doesn't exist.
*/
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
