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
 * _strncat - Appends the first num characters of source
 * to destination, plus a terminating null-character.
 * @src: string to append
 * @dest: string to append to
 * @n: number of bytes to append
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l1, l, j, i;

	l1 = len(dest); /* stores the length of destingation string */
	j = 0; /* counter for the source stirng */
	i = 0; /* counter of the concatenated string */

	if (n > l1) /* if n is greater than the destination size set to dest size*/
		n = l1;

	/* stores the length of dest string and no of bytes to append */
	l = l1 + (n - 1);


	/**
	 * i is first set to the length of the dest string because we will
	 * start adding from
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
