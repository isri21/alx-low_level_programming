#include "main.h"
#include <string.h>

/**
* leet - encodes string into leet
* @str: string to be encoded
*
* Return: encoded string
*/
char *leet(char *str)
{
	int i, j, l = strlen(str);
	char ch[] = "aAeEoOtTlL";
	char en[] = "4433007711";

	for (i = 0; i < l; i++)
	{
		for (j = 0; j < 10; j++)
			if (str[i] == ch[j])
				str[i] = en[j];
	}
	return (str);
}
