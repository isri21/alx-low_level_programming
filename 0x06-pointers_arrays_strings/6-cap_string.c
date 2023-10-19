#include "main.h"
#include <string.h>
#include <ctype.h>

/**
* cap_string - capitalizes the first letters of every word.
* @str: string to capitalize
*
* Return: capitalized string
*/
char *cap_string(char *str)
{
	int i, j, l = strlen(str);
	char ch[] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"',
'(', ')', '{', '}'};

	for (i = 0; i < l; i++)
	{
		if (i == 0 && i >= 'a' && i <= 'z')
			str[i] = toupper(str[i]);
		for (j = 0; j < 13; j++)
		{
			if (str[i] == ch[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = toupper(str[i + 1]);
		}
	}
	return (str);
}
