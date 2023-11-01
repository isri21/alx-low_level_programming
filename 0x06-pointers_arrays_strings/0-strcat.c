#include "main.h"
/**
 * len - gets the length of a string
 * @str: string to get length for
 *
 * Return: length of the string
 */
int len(char *str)
{
	int l = 0, i = 0;

	for (i = 0; str[i] != '\0'; i++)
		l += 1;

	return (l);
}
/**
 * _strcat - concatenates two strings, appends src to dest
 * @src: string to append
 * @dest: string to append to
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int l1 = len(dest); /* stores the length of destingation string */
	int l2 = len(src); /* stores the length of source string */
	int l = l1 + l2; /* stores the length of both strings */
	int j = 0; /* counter for the source stirng */
	int i = 0; /* counter of the concatenated string */

	/**
	 * i is first set to the length of the dest string because
	 * we will start adding from there and loop will end untill i is equal
	 * the length of the sum of both the elements.
	 */
	for (i = l1; i <= l; i++)
	{
		if (i == l) /* if you reach the last element add a null character */
			dest[i] = '\0';
		dest[i] = src[j]; /* assign the */
		j++; /* incremetn the counter for source string */

	}
	return (dest); /* return pointer to the destination string */
}
