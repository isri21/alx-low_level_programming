#include "main.h"
/**
 * binary_to_uint - converts a binary to a string
 * @b: string of binary to convert
 *
 * Return: the converted number if success, else 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, i, l;

	if (b == NULL) /* check if the argument is NULL, return 0 */
		return (0);

	num = 0; /* integer variable to manipulate */
	l = _strlen(b); /* length of the stirng */

	for (i = 0; i < l; i++) /* loop through the string */
	{
		if (b[i] == '1')
		/* if the char is '1' add one bit(0) from the right and convert it to 1 */
			num = (num << 1) | 1;
		else if (b[i] == '0')
		/* if the char is '0' just add one bit(0) from the right */
			num = num << 1;
		else /*character in the string is other that '0' or '1' return 0 */
			return (0);
	}

	return (num); /* reutrn the manipulated (converted) string */
}

/**
* _strlen - returns the length of a string.
* @s: pointer to the string whose length is to be returned.
*
* Return: void
*/
int _strlen(const char *s)
{
	int i, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c += 1;
	}
	return (c);
}
