#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers supplied as arguments
 * @separator: separator to separate numbers
 * @n: number of integers to print
 *
 * Return: Void.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list; /* declare list */
	unsigned int i; /* declare counter */

	va_start(list, n); /* start list */
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int)); /* printf arguments */

	/* if separator is NULL & not the last argument add separator*/
	if (separator != NULL && i != (n - 1))
		printf("%s", separator); /* print separtor in between arguments */
	}
	putchar('\n'); /* add new line at the end */
	va_end(list); /* end list */
}
