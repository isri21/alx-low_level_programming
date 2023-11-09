#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void.
*/
void print_all(const char * const format, ...)
{
	int i;
	char *string;
	char *sp;
	va_list list;

	va_start(list, format);
	i = 0;
	sp = ""; /* set spacer to emtpy string first */
	/* run if argument numbers not null and upto number of args */
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i]) /* if the character is */
		{
		case 'c': /* this */
			printf("%s%c", sp, va_arg(list, int)); /* print this... */
			break;
		case 'i':
			printf("%s%d", sp, va_arg(list, int));
			break;
		case 'f':
			printf("%s%f", sp, va_arg(list, double));
			break;
		case 's': /* if it is a string */
			string = va_arg(list, char *); /* store it in this var */
			if (string == NULL) /* if it is NULL print (nil) */
			{
				printf("%s(nil)", sp);
				break;
			}
			printf("%s%s", sp, string); /* else print the string */
			break;
		default:
			i++; /* if the char is not mentioned above increament and skip the rest */
			continue;
		}
		sp = ", "; /* after the loop runs onc set spacer to ", " */
		i++;
	}
	putchar('\n');
}
