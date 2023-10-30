#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars using malloc, and initializes it
* with a specific character.
* @size: size of the array
* @c: character to initialize with
*
* Return: NULL if size is 0, else  the pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *ch = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || ch == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (ch);
}
