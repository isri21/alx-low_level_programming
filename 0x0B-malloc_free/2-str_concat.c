#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* str_concat -  concatenates two strings using malloc.
* @s1: string to concatinate to
* @s2: sting to conactinate to s1
*
* Return: NULL if malloc fails, else pointer to allocated memory
*/
char *str_concat(char *s1, char *s2)
{
	/* initializing variables */
	int len1, len2, i;
	char *buff;
	/**
	* checks if arguments are set to NULL,
	* if they are it replaces with empty string
	*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* getting the length of the strings */
	len1  = strlen(s1);
	len2 = strlen(s2);

	/* creating the new memory to store strings */
	/* and setting the size equal to the size of both stirgs */
	buff = malloc(sizeof(char) * (len1 + len2 + 1));

	/* returns NULL if malloc fails */
	if (buff == NULL)
		return (NULL);
	/* copies the first string to memory first */
	for (i = 0; i < len1; i++)
		buff[i] = s1[i];

	/* copies the second string to memory */
	for (i = 0; i < len2; i++)
		buff[len1 + i] = s2[i];

	return (buff);
}
