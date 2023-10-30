#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: string to be copied
*
* Return: NULLif malloc returns NULL or str is NULL,
* else pointer to new memory which contains string
*/
char *_strdup(char *str)
{
	int len1, i;
	char *buff;

	if (str == NULL)
		return (NULL);

	len1  = strlen(str) + 1;
	buff  = malloc(sizeof(char) * len1);

	if (buff == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		buff[i] = str[i];
	return (buff);
}
