#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings supplied to arguments
 * @separator: separator to separate numbers
 * @n: number of strings to print
 *
 * Return: Void.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list; /* declare list */
	unsigned int i; /* declare counter */

	va_start(list, n); /* start list */
	for (i = 0; i < n; i++)
	{
		char *string;

		string = va_arg(list, char *);
		if (string == NULL) /* if argument is NULL print (nil) */
			printf("(nil)");
		else
			printf("%s", string); /* print arguments */

		/* if separator is NULL & not the last argument*/
		if (separator != NULL && i != (n - 1))
			printf("%s", separator); /* print separtor in between arguments */
	}
	putchar('\n'); /* add new line at the end */
	va_end(list); /* end list */
}
