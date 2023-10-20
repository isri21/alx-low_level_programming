#include "main.h"
#include <string.h>

/**
* rot13 - encrypts string into rot13
* @str: string to be encrypted
*
* Return: encrypted string
*/
char *rot13(char *str)
{
	int i, j, l = strlen(str);
	char ch[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char en[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; i < l; i++)
	{
		for (j = 0; j < 26 * 2; j++)
			if (str[i] == ch[j])
			{
				str[i] = en[j];
				break;
			}
	}
	return (str);
}
