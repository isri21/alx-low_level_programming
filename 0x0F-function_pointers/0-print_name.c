#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Prints a name
 * @name: the name to print
 * @f: function throught which name is printed
 *
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
