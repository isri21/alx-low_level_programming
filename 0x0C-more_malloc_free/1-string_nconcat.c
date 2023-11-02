#include "main.h"
#include <stdlib.h>
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
 * string_nconcat - concatenates n bytes from s2 to s1
 * @s1: string to append
 * @s2: string to append to
 * @n: number of bytes to append to s1
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, l, j = 0, i = 0; /* declare variables */
	char *ptr;

	if (s1 == NULL) /* if s1 is NULL treat it as an empty string */
		s1 = "";
	if (s2 == NULL) /* if s2 is NULL treat it as an empty string */
		s2 = "";

	l1 = len(s1); /* set l1 to the length of first string */
	l2 = len(s2); /* set l2 to the length of first string */
	l = l1 + n;	/* set l size of s1 and bytes specified (n)*/
	if (n >= l2) /* if n>= the length of s2 set n to lenght of s2 */
		n = l2;
	ptr = malloc(sizeof(char) * (l + 1)); /* allocate memory for the string */

	if (ptr == NULL) /* if malloc fails return NULL */
		return (NULL);

	for (i = 0; i < l1; i++) /* copy s1 to new memory */
		ptr[i] = s1[i];

	/* concatinate n bytes of s2 to s1 in new memory */
	for (i = l1; i <= l; i++)
	{
		if (i == l) /* if i is the last character make it a \0*/
		{
			ptr[i] = '\0';
		} else
		{
			ptr[i] = s2[j];
			j++;
		}
	}

	return (ptr);
}
